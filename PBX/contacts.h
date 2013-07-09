#ifndef CONTACTS_H
#define CONTACTS_H
#include <QWidget>
#include <QStandardItemModel>
#include <QtCore/QFile>
#include <QTCore/QTextStream>
#include <QTextStream>
#include <QDebug>
namespace Ui {
class Contacts;
}

class Contacts : public QWidget
{
    Q_OBJECT
    
public:
    explicit Contacts(QWidget *parent = 0);
    ~Contacts();
    
private slots:
    void on_buttonSelect_clicked();
    void on_buttonCancel_clicked();
signals:
    //void sendNumberContacts(QString str);
private:
    Ui::Contacts *ui;
};

#endif // CONTACTS_H
