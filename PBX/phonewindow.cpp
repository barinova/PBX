#include "phonewindow.h"
#include "ui_phonewindow.h"
#define dataBaseName "C:/Users/A/Desktop/Examples/Contacts"

PhoneWindow::PhoneWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhoneWindow)
{
    ui->setupUi(this);
    ui->buttonRetreive->setDisabled(true);
    ui->tabWidget->setCurrentIndex(0);
    getTable();
    QListView * listView = new QListView(ui->comboBox);
    ui->comboBox->addItem("ENGENEER");
    ui->comboBox->addItem("TESTER");
    ui->comboBox->addItem("HR");
    listView->setStyleSheet("QListView::item {                              \
                                 border-bottom: 5px solid white; margin:3px; }  \
                                 QListView::item:selected {                     \
                                 border-bottom: 5px solid black; margin:3px;    \
                                 color: black;                                  \
                                }                                               \
                                ");
    ui->comboBox->setView(listView);

}

PhoneWindow::~PhoneWindow()
{
    delete ui;
}

void PhoneWindow::setNumber(QString str)
{
    //client data
    user.extension = str.toInt();
    user.status = ONLINE;
    user.timestamp = clock();
    action.extension = str.toInt();
    str.prepend("number - ");
    this->setWindowTitle(str);
    updateDataUser(ONLINE, user.type);
    updateDataUser();
    //connection with server
    con = new Connection();
    con->setNumber(user.extension);
    connect(con, SIGNAL(sendToPhoneWindow(QString)), this, SLOT(fromInOut(QString)));
    connect(con, SIGNAL(sendToServ(QString)), this, SLOT(recieveFromInOut(QString)));
}

void PhoneWindow::getTable()
{
    QMessageBox *mb = new QMessageBox();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dataBaseName);
    if(!db.open()){
          qDebug()<<db.lastError().text();
          return;
       }
    if(!db.isOpen())
       {
           mb->setText("Fail");
           mb->show();
       }
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

void PhoneWindow::updateDataUser(statistic status, typeCall group)
{
    QString strUser, strGroup;
    user.status = status;
    switch(status)
    {
        case ONLINE:  {strUser = "ONLINE"; break;}
        case OFFLINE:  {strUser = "OFFLINE"; break;}
        case AWAY:  {strUser = "AWAY"; break;}
        case BUSY:  {strUser = "BUSY"; break;}
        case CONFERENCE:  {strUser = "CONFERENCE"; break;}
    }
    ui->labelStatus->setText(strUser);
}

void PhoneWindow::updateDataUser()
{
    QString strGroup;
    QSqlQuery query;
    bool ret = false;
    ret = query.exec("SELECT * FROM Contacts");
    //ret = query.exec(QString("SELECT groups FROM Contacts WHERE number = %1").arg(user.extension));
    if (!ret)
    {
        QMessageBox::information(this, "FAIL", query.lastError().text());
    }
    QSqlRecord rec = query.record();
    query.next();
        //qDebug() << query.value(rec.indexOf("number")).toInt() << query.value(rec.indexOf("status")).toString();

    typeCall stat = user.switchCall(query.value(rec.indexOf("groups")).toString().toStdString(), user.mapType);
    switch(stat)
       {
           case ENGINEER:  {strGroup = "ENGINEER"; break;}
           case TESTER:  {strGroup = "TESTER"; break;}
           case HR:  {strGroup = "HR"; break;}
       }
    ui->labelGroup->setText(strGroup);
}

void PhoneWindow::sendMsg(QString str)
{
    con->data.clear();
    con->data.append(str);
    con->data.append('\n');
    con->SendMessage();
}

void PhoneWindow::on_testButton_clicked()
{
    Connection *con = new Connection();
    con->show();
}


void PhoneWindow::on_buttonCall_clicked()
{
   if(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)) != user.extension)
   {
       ui->buttonConference->setEnabled(false);
       InOutCall *inout = new InOutCall();
       connect(inout, SIGNAL(sendToServ(QString)), this, SLOT(recieveFromInOut(QString)));
       inout->setLable("outgoing", ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
       inout->show();
       inout->myExtention = user.extension;
       connect(inout, SIGNAL(sendData(QString)), this , SLOT(recieveData(QString)));
       updateDataUser(BUSY, user.type);
   }
}


void PhoneWindow::on_buttonExit_clicked()
{
    if(user.status == ONLINE)
    {
        con->data.clear();
        con->data.append("OFFLINE");
        con->SendMessage();
    }
    else
    {
        QMessageBox *box = new QMessageBox();
        box->setText("Complete all calls");
        box->show();
    }
}

void PhoneWindow::on_buttonHangUp_clicked()
{
    if(!ui->listWidget->selectedItems().isEmpty())
    {
        QString str;
        if(!ui->listWidget->item(0)->text().isEmpty())
        {
            str = "ACT\n" + QString::number(user.extension) + "\nCC\n" + ui->listWidget->item(0)->text() + "\nNULL";
            sendMsg(str);
        }
        updateDataUser(ONLINE, user.type);
        ui->listWidget->clear();
        ui->buttonCall->setEnabled(true);
    }
}


void PhoneWindow::on_buttonHold_clicked()
{
    ui->buttonRetreive->setEnabled(true);
    ui->buttonHold->setDisabled(true);
}

void PhoneWindow::on_buttonReceive_clicked()
{
    ui->buttonRetreive->setDisabled(true);
    ui->buttonHold->setEnabled(true);
}

void PhoneWindow::recieveData(QString str)
{
    actionType act;
    int secPart = NULL, thPart = NULL, callID = NULL;
    QStringList lst = str.split(" ");
    if (lst.size() > 0)
    {
        ui->labelStatus->setText(lst.at(0));
        statistic stat = user.switchStat(lst.at(0).toStdString(), user.mapStatus);
        updateDataUser(stat, user.type);
    }
    if (lst.size() > 1)
    {
        act = action.switchType(lst.at(1).toStdString(), action.mapAct);
    }

    if (lst.size() > 2)
    {
        if(lst.at(2) != "NULL")
            secPart = lst.at(2).toInt();
    }

    if (lst.size() > 3)
    {
        if(lst.at(2) != "NULL")//0
            thPart = lst.at(3).toInt();
    }

    if (lst.size() > 4)
    {
        if(lst.at(2) != "NULL")
            callID = lst.at(4).toInt();
    }
}

void PhoneWindow::recieveFromInOut(QString str)
{
    if(str == "OFFLINE")
    {
        this->close();
    }
        else if(str == "ONLINE")
        {
            updateDataUser(ONLINE, user.type);
            ui->buttonCall->setEnabled(true);
        }
            else if(str == "BUSY")
            {
                 updateDataUser(BUSY, user.type);
                 ui->buttonCall->setEnabled(true);
            }
                else
                {
                     sendMsg(str);
                }
}

void PhoneWindow::fromInOut(QString str)
{
    if(str == "ONLINE")
    {
        ui->listWidget->clear();
        updateDataUser(ONLINE, user.type);
    }
    else if(str == "OFFLINE")
                this->close();
            else
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->listWidget->addItem(str);
                //action action wait
                ui->buttonCall->setDisabled(true);
            }
}

void PhoneWindow::on_buttonUpdateContacts_clicked()
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

void PhoneWindow::closeEvent(QCloseEvent *event)
{
    QSqlQuery query;
    bool ret = false;
    //depends of db
    ret = query.exec(QString("UPDATE Contacts SET status = 'OFFLINE' WHERE number = %1").arg(user.extension));
    if (!ret)
    {
        QMessageBox::information(this, "FAIL", query.lastError().text());
    }
    close();
}
