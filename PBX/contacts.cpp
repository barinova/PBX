#include "contacts.h"
#include "ui_contacts.h"

Contacts::Contacts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Contacts)
{
    ui->setupUi(this);
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
    ui->tableView->setModel(mytablemodel);
    connect(ui->buttonSelect, SIGNAL(clicked()), this, SLOT(on_buttonSelect_clicked()));

}

Contacts::~Contacts()
{
    delete ui;
}

void Contacts::on_buttonSelect_clicked()
{
    //int number = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toInt();
    //emit sendNumberContact( "TR\n" + QString::number(number));
    this->close();
}

void Contacts::on_buttonCancel_clicked()
{
    this->close();
}
