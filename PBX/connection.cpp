#include "connection.h"
#include "ui_connection.h"
#include "inoutcall.h"
#include "phonewindow.h"
Connection::Connection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Connection)
{
    //ui->setupUi(this);
    s_port = 1234;
    //s_address.setAddress("25.111.13.47");
    s_address.setAddress("127.0.0.1");
    //s_address.setAddress("192.168.0.1");
    client = new QTcpSocket;
    client->connectToHost(s_address, s_port);
    connect(client, SIGNAL(connected()),this,SLOT(SendMessage()));
    connect(client, SIGNAL(readyRead()),this,SLOT(GetMessage()));
    connect(client, SIGNAL(error(QAbstractSocket::SocketError)),this, SLOT(displayError(QAbstractSocket::SocketError)));
}

Connection::~Connection()
{
    delete ui;
}

void Connection::SendMessage() {
    client->write(data);
  }

void Connection::GetMessage() {
    QString str = client->readAll();
    if(QString(str) == "OFFLINE")
    {
        emit sendToPhoneWindow("OFFLINE");
    }
    else
    {
        TypeMessage(str.toStdString());
    }
  }

void Connection::displayError(QAbstractSocket::SocketError socketError)
{
    if (socketError == QTcpSocket::RemoteHostClosedError)
        return;

    QMessageBox::critical(this, tr("Network error"),
                             tr("The following error occurred: %1.")
                             .arg(client->errorString()));

    client->close();
}

void Connection::on_sendButton_clicked()
{
    data.clear();
    QString str = ui->editMessage->toPlainText();
    data.append(str);
    SendMessage();
}

void Connection::TypeMessage(std::string str)
{
    std::string tmp = str.substr(0,3);
    if(tmp == "USR")
    {
        UserInfo userInfo;
        str.erase(0,4);
        userInfo = userInfo.Parse(str);
        saveHistory(tmp, userInfo);
    }
    else if(tmp == "ACT")
    {
        Action act;
        str.erase(0,4);
        act = act.Parse(str);
        saveHistory(tmp, act);
        std::string tmp;
        InOutCall *inOut = new InOutCall();
        inOut->sender = act.secondParty;
        inOut->myExtention = act.extension;
        switch(act.type)
        {
            case CO:
            {
                inOut->show();
                tmp = "CO";
                inOut->setLable("incomming", QString::number(act.secondParty));
                connect(inOut, SIGNAL(sendToPhoneWindow(QString)), this, SLOT(establishedFromInOut(QString)));
                emit sendToServ("BUSY");
                break;
            }
            case CE:
            {
                tmp = "CE";
                emit sendToPhoneWindow(QString::number(act.secondParty));
                break;
            }
            //connect :
            case CC:  {
           /* if (inOut->isEnabled())
            {
                inOut->activateWindow();
                this->close();
            }*/

            inOut->close(); emit sendToPhoneWindow("ONLINE"); break;}
        }
        connect(inOut, SIGNAL(sendToServ(QString)), this, SLOT(recieveFromInOut(QString)));
    }
    else
    {
        QMessageBox mBox;
        mBox.setText("Error type of message");
    }
}

void Connection::saveHistory(std::string str, UserInfo getMsg)
{
    str += ".log";
    std::ofstream out;
    out.open(str.c_str());
    out << getMsg.extension;
    out << getMsg.name;
    out << getMsg.timestamp;
    //!!!
    //ToString???
    out << getMsg.status;
    out << getMsg.type;
    out.put('\n');
    out.close();
}

void Connection::saveHistory(std::string str, Action getMsg)
{
    str += ".log";
    std::ofstream out;
    out.open(str.c_str());
    out << getMsg.extension << "\n";
    //!!!
    out << getMsg.type << "\n";
    out << getMsg.secondParty << "\n";
    out << getMsg.thirdParty << "\n";
    out << getMsg.callID << "\n";
    out.put('\n');
    out.close();
}

void Connection::setNumber(int extension)
{
    data.clear();
    data.append(QString::number(extension));
}
void Connection::recieveFromInOut(QString str)
{
    data.clear();
    data.append(str);
    data.append('\n');
    SendMessage();
}

void Connection::establishedFromInOut(QString str)
{
    emit sendToPhoneWindow(str);
}
