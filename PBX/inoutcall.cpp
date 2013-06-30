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
        //str = "ACT BUSY CO " + temp + " NULL";
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
    ui->tableView->setModel(getTable());
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

QStandardItemModel* InOutCall::getTable()
{
    QStandardItemModel *mytablemodel = new QStandardItemModel();
    mytablemodel->setRowCount(0);

    int Max_num_of_Columns(3);
    int Max_Number_of_Lines(0);
    mytablemodel->setColumnCount(Max_num_of_Columns);

    QFile file("C:/Users/A/QT/PBX/contacts.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
      qDebug() << "Error opening file";
    mytablemodel->setHeaderData(0, Qt::Horizontal, "Number");
    mytablemodel->setHeaderData(1, Qt::Horizontal, "Name");
    mytablemodel->setHeaderData(2, Qt::Horizontal, "Group");
    QTextStream InputDataFile(&file);
    while (!InputDataFile.atEnd())
    {
        QString line = InputDataFile.readLine();
        QStringList fields = line.split(" ");

        if (fields.size() == Max_num_of_Columns)
        {
            for (int column=0; column< Max_num_of_Columns; column++)
            {
                QStandardItem *item = new QStandardItem(fields[column]);
                mytablemodel->setItem(Max_Number_of_Lines, column, item);
            }
            Max_Number_of_Lines++ ;
        }
    }
    file.close();
    return mytablemodel;
}


void InOutCall::on_buttonSelectNum_clicked()
{
    QString tmp = "ACT\n" + QString::number(sender) + "\nCT\n" + QString::number(myExtention) + "\n" + ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString() + "\n1";
    emit sendToServ(tmp);
    emit sendToServ("ONLINE");
}


void InOutCall::on_buttonCancel_clicked()
{
    this->close();
}
