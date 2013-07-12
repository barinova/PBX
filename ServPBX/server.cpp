#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
    server = new QTcpServer(this);
    s_address.setAddress("127.0.0.1");
    s_port = 1234;
    server->listen(s_address, s_port);
    getTable();
    connect(server, SIGNAL(newConnection()), this, SLOT(NewClient()));
    bytes = 0;
    ui->buttonInsert->setDisabled(true);
    ui->buttonCancel->setDisabled(true);
    CallID call;
    call.id = 0;
    callID.push_back(call);
}

Server::~Server()
{
    delete ui;
}

void Server::NewClient() {
    client = server->nextPendingConnection();
    connect(client, SIGNAL(readyRead()),this,SLOT(GetMessage()));
    ui->textBrowser->append(tr("New client from ") + client->peerAddress().toString());
    // new client to listConnect(extension is determined after)
    lstCon lst;
    lst.extension = 0;
    lst.tcpSock = client;
    listConnect.append(lst);
    //update in data base
  }

void Server::GetMessage() {
    QString str;
    QTcpSocket *senderSocket = qobject_cast<QTcpSocket *>(sender());
    client = senderSocket;
    data = client->readAll();
    //if message "OFFLINE" remove extention from listConnect
    if(QString(data) == "OFFLINE")
    {
        for(int i(0); i < listConnect.count(); i++)
        {
            if(listConnect[i].tcpSock == senderSocket)
            {
              senderSocket->close();
              listConnect.removeAt(i);
              client->write("OFFLINE");
              updateTable();
            }
        }
    //qDebug() << ;

        //client->disconnect();
    }
    else
    {
        ui->textBrowser->append(data);

        if(atoi(QString(data).toStdString().c_str()))
        {
            int row = ui->tableView->model()->rowCount();
            QSqlQuery query;
            for(int i(0); i < row; i++)
            {
                if(ui->tableView->model()->index(i, 0).data().toInt() == data.toInt())
                {
                    QString str = "UPDATE Contacts SET status='ONLINE' WHERE number=%1;";
                    str = str.arg(data.toInt());
                    query.exec(str);
                    updateTable();
                    break;
                }
                if(i == row - 1)
                {
                    data.clear();
                    data.append("OFFLINE");
                    client->write(data);
                    QMessageBox::information(this, "Error", QString("Wrong autorization from %1")
                                             .arg(client->peerAddress().toString()));
                }
            }
        }

        //if new client(his number = 0) - add extention to listConnect
        if(listConnect.back().extension == 0)
        {
            bool constraints = false;
            int n = data.toInt();
            for(int i(0); i < listConnect.count() - 1; i++)
            {
                if(listConnect[i].extension == n)
                {
                    constraints = true;
                }
            }
            if(constraints == false)
                listConnect.back().extension = n;
            else
            {
                client->write("OFFLINE");
                listConnect.pop_back();
            }
        }
        GetMessageFrom *getMsg = new GetMessageFrom();
        //send a recieveMessage depends on the type of message
        connect(getMsg, SIGNAL(forCallID(int, int, int, actionType)), this, SLOT(setCallID(int, int, int, actionType)));

        str = getMsg->TypeMessage(QString(data).toStdString());
//search socket receiver
        if(!str.isEmpty())
        {
            QStringList list = str.split("\n");//split problem
            //insert extension of receiver
            for(int i(0); i < listConnect.count(); i++)
            {
                if(listConnect[i].extension == atoi(list.at(1).toStdString().c_str()))
                {
                    data.clear();
                    client = listConnect[i].tcpSock;
                    data.append(str);
                    client->write(data);
                    updateTable();
                }
            }
        }
    }
  }

void Server::on_buttonSend_clicked()
{
    QByteArray data;
    QString str = ui->textEdit->toPlainText();
    data.append(str);
    client->write(data);
    data.clear();
}


void Server::getTable()
{
    QMessageBox *mb = new QMessageBox();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dataBaseName);
    if(!db.open()){
          qDebug() << db.lastError().text();
          return;
       }
    if(!db.isOpen())
       {
           mb->setText("Fail");
           mb->show();
       }
    updateTable();
    connect(ui->tableView, SIGNAL(clicked(QModelIndex)),this,SLOT(on_tableView_clicked(QModelIndex)));
}

bool Server::insertVal(int num, QString name, QString groups, QString status)
{
    QSqlQuery query;
    bool ret = false;
    QString insert_query = "INSERT INTO Contacts(number,name,groups,status) VALUES('%1','%2','%3','%4');";
     insert_query = insert_query.arg(num)
     .arg(name)
     .arg(groups)
     .arg(status);
     ret = query.exec(insert_query);
     if(!ret){
        QMessageBox::information(this, "FAIL", query.lastError().text());
     }
     return ret;
}

bool Server::deleteVal(int id)
{
    bool ret = false;
    QSqlQuery query;
    ret = query.exec(QString("DELETE FROM Contacts WHERE number=%1;").arg(id));
    if (!ret)
    {
        QMessageBox::information(this, "Fail", query.lastError().text());
    }
    else
    {
        updateTable();
    }
    return ret;
}

bool Server::selectVal()
{
    QSqlQuery query;
    bool ret = false;
    ret = query.exec("SELECT * FROM Contacts");
    if (!ret)
    {
        QMessageBox::information(this, "FAIL", query.lastError().text());
    }
    QSqlRecord rec = query.record();

    while(query.next())
    {
        qDebug()<<query.value(rec.indexOf("number")).toInt()<<
        query.value(rec.indexOf("name")).toString()<<
        query.value(rec.indexOf("groups")).toString()<<
        query.value(rec.indexOf("status")).toString();
    }
    query.clear();
    return ret;
}

void Server::updateTable()
{
    model = new QSqlTableModel(this,db);
    model->setTable("Contacts");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0,Qt::Horizontal,"number");
    model->setHeaderData(1,Qt::Horizontal,"name");
    model->setHeaderData(0,Qt::Horizontal,"groups");
    model->setHeaderData(0,Qt::Horizontal,"status");
    ui->tableView->setModel(model);
}
void Server::on_buttonAdd_clicked()
{
    int row = ui->tableView->model()->rowCount();
    ui->tableView->model()->insertRows(row, 1);
    ui->tableView->setCurrentIndex(ui->tableView->model()->index(row,0));
    ui->tableView->model()->index(row,1).data() = "OFFLINE";

    ui->buttonInsert->setEnabled(true);
    ui->buttonAdd->setDisabled(true);
    ui->buttonDelete->setDisabled(true);
    ui->buttonCancel->setEnabled(true);
}

void Server::on_buttonCancel_clicked()
{
    int row = ui->tableView->model()->rowCount();
    ui->tableView->model()->removeRow(row - 1);
    ui->buttonInsert->setDisabled(true);
    ui->buttonCancel->setDisabled(true);
    ui->buttonAdd->setEnabled(true);
    ui->buttonDelete->setEnabled(true);
}

void Server::on_buttonInsert_clicked()
{
    int row = ui->tableView->model()->rowCount();
    if(!insertVal(ui->tableView->model()->data(ui->tableView->model()->index(row - 1,0)).toInt(),
              ui->tableView->model()->data(ui->tableView->model()->index(row - 1,1)).toString(),
              ui->tableView->model()->data(ui->tableView->model()->index(row - 1,2)).toString(),
              "OFFLINE"))
    {
        ui->tableView->model()->removeRow(row - 1);
    }
    ui->buttonInsert->setDisabled(true);
    ui->buttonCancel->setDisabled(true);
    ui->buttonAdd->setEnabled(true);
    ui->buttonDelete->setEnabled(true);
}

void Server::on_buttonDelete_clicked()
{
    int row = ui->tableView->selectionModel()->currentIndex().row();
    int id = ui->tableView->model()->index(row, 0).data().toInt();
    deleteVal(id);
}

void Server::on_buttonUpdate_clicked()
{
    bool ret = false;
    int tmp;
    QSqlQuery query;
    int row = ui->tableView->selectionModel()->currentIndex().row();
    tmp = ui->tableView->model()->index(row, 0).data().toInt();
    if((QMessageBox::Yes == QMessageBox::question(this, "Change", "Do you really want to change selected row?", QMessageBox::Yes|QMessageBox::No)))
    {
        QString name = "'" + ui->tableView->model()->index(row, 1).data().toString() + "'";
        QString group = "'" + ui->tableView->model()->index(row, 2).data().toString() + "'";
        QString status = "'" + ui->tableView->model()->index(row, 3).data().toString() + "'";
        ret = query.exec(QString("UPDATE Contacts SET name = %2, groups = %3, status = %4 WHERE number = %1;")
                         .arg(ui->tableView->model()->index(row, 0).data().toInt())
                         .arg(name)
                         .arg(group)
                         .arg(status));
        if (!ret)
        {
            QMessageBox::information(this, "Fail", query.lastError().text());
        }
        else
        {
            std::string str = ui->tableView->model()->index(row, 3).data().toString().toStdString();
            if(strcmp(str.c_str(), "OFFLINE") == 0)
            {
                for(int i(0); i < listConnect.count(); i++)
                    if(client == listConnect[i].tcpSock)
                    {
                        data.clear();
                        data.append("OFFLINE");
                        client->write(data);
                    }
            }
            updateTable();
        }
    }
}

void Server::setCallID(int first, int second, int third, actionType type)
{
    if(type == CC)
    {
        //CC
        for(int i(0); i < callID.count(); i++)
        {
            if(callID[i].secondParty == first && callID[i].firstParty == second)
                callID.removeAt(i);
        }
    }
    else
    {
        if(type == CO)
        {
            CallID call;
            call.id = callID.back().id + 1;
            call.firstParty = first;
            call.secondParty = second;
            call.thirdParty = third;
            callID.push_back(call);
        }
        else
        {
            //CT
            for(int i(0); i < callID.count(); i++)
            {
                if(callID[i].secondParty == first && callID[i].firstParty == second)
                {
                    callID[i].secondParty = third;
                    callID[i].firstParty = first;
                }
            }
        }
    }
}

void Server::on_tableView_clicked(const QModelIndex &index)
{
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void Server::closeEvent(QCloseEvent *event)
{
    QSqlQuery query;
    bool ret = false;
    ret = query.exec(QString("UPDATE Contacts SET status = 'OFFLINE'"));
    if (!ret)
    {
        QMessageBox::information(this, "FAIL", query.lastError().text());
    }
    close();
}
