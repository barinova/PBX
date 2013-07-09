#ifndef INOUTCALL_H
#define INOUTCALL_H
#include <QWidget>
#include <string>
//#include "contacts.h"
#include "phonewindow.h"
#include <QWidget>
#include <QStandardItemModel>
#include <QtCore/QFile>
#include <QTCore/QTextStream>
#include <QTextStream>
#include <QDebug>
#include <QTableView>
#define dataBaseName "C:/Users/A/Desktop/Examples/Contacts"

namespace Ui {
class InOutCall;
}

class InOutCall : public QWidget
{
    Q_OBJECT
    
public:
    explicit InOutCall(QWidget *parent = 0);
    void setLable(QString str, QString strNum);
    int sender;
    int myExtention;
    ~InOutCall();
signals:
   // void sendData(QString str);
    void sendToServ(QString str);
    void sendToPhoneWindow(QString str);

public slots:
    void on_buttonDesline_clicked();
private slots:
    void on_buttonTransfer_clicked();
    void on_buttonAnswer_clicked();
    void on_buttonCall_clicked();
    void on_buttonSelectNum_clicked();
    void on_buttonCancel_clicked();

private:
    Ui::InOutCall *ui;
    int num;
    void getTable();
};

#endif // INOUTCALL_H

