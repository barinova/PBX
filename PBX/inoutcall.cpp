#include "inoutcall.h"
#include "ui_inoutcall.h"
InOutCall::InOutCall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InOutCall)
{
    num = NULL;
    ui->setupUi(this);
    ui->tabWidget->widget(1)->setDisabled(true);
    ui->tabWidget->widget(0)->setFocus();
    this->setWindowTitle("Call");
    emit sendToServ("BUSY");
}

InOutCall::~InOutCall()
{
    delete ui;
}

void InOutCall::setLable(QString str, QString strNum)
{
    //depends on the ation(out/incomming call set text)
    QString tmp;
    if(str == "outgoing")
    {
        tmp = str + " call to";
        ui->labelInOut->setText(tmp);
        ui->labelInOutNum->setText(strNum);
        ui->buttonTransfer->setVisible(false);
        ui->buttonAnswer->setVisible(false);
    }
    else
    {
        tmp = str + " call from";
        ui->labelInOut->setText(tmp);
        ui->labelInOutNum->setText(strNum);
        ui->buttonCall->setVisible(false);
    }
}

void InOutCall::on_buttonCall_clicked()
{
    QString str, temp;
    temp = ui->labelInOutNum->text();
    if(!temp.isEmpty())
    {
        str = "ACT\n" + QString::number(myExtention) + "\nCO\n" + temp + "\nNULL";
        emit sendToServ(str);
    }
    ui->buttonCall->setDisabled(true);
    this->close();
}

void InOutCall::on_buttonTransfer_clicked()
{
    ui->tabWidget->insertTab(1,ui->tabWidget->widget(1), "Transfer");
    ui->tabWidget->widget(1)->setEnabled(true);
    getTable();
    ui->tabWidget->setCurrentIndex(1);
}

void InOutCall::on_buttonDesline_clicked()
{
    QString str, temp;
    temp = ui->labelInOutNum->text();
    if(!temp.isEmpty())
    {
        str = "ACT\n" + QString::number(myExtention) + "\nCC\n" + temp + "\nNULL";
        emit sendToServ(str);
    }
    this->close();
    emit sendToServ("ONLINE");
}

void InOutCall::on_buttonAnswer_clicked()
{
    QString str, temp;
    temp = ui->labelInOutNum->text();
    if(!temp.isEmpty())
    {
        str = "ACT\n" + QString::number(myExtention) + "\nCE\n" + temp + "\nNULL";
        emit sendToServ(str);
        emit sendToPhoneWindow(temp);
    }
    this->close();
}

void InOutCall::getTable()
{
    QMessageBox *mb = new QMessageBox();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
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
    QSqlTableModel *model = new QSqlTableModel(this,db);
    model->setTable("Contacts");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0,Qt::Horizontal,"number");
    model->setHeaderData(1,Qt::Horizontal,"name");
    model->setHeaderData(0,Qt::Horizontal,"groups");
    model->setHeaderData(0,Qt::Horizontal,"status");
    ui->tableView->setModel(model);
}


void InOutCall::on_buttonSelectNum_clicked()
{
    if(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString() == "ONLINE")
    {
        QString tmp = "ACT\n" + QString::number(sender) + "\nCT\n" + QString::number(myExtention) + "\n" + ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString() + "\n1";
        emit sendToServ(tmp);
        emit sendToServ("ONLINE");
        this->close();
    }
    else
    {
        QMessageBox::information(this, "Error", "This user is not online");
    }
}


void InOutCall::on_buttonCancel_clicked()
{
    this->close();
}
