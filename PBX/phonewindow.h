#ifndef PHONEWINDOW_H
#define PHONEWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QByteArray>
#include <QTcpSocket>
#include <QHostAddress>
#include <QStandardItemModel>
#include "connection.h"
#include "action.h"
#include "userinfo.h"
#include "inoutcall.h"
#include <QtSQL>
namespace Ui {
class PhoneWindow;
}

class PhoneWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PhoneWindow(QWidget *parent = 0);
    ~PhoneWindow();
    void setNumber(QString str);
    UserInfo user;
    Action action;

public slots:
    void recieveData(QString str);
    void recieveFromInOut(QString str);
    void fromInOut(QString str);
private slots:
    void on_testButton_clicked();
    void on_buttonCall_clicked();
    void on_buttonExit_clicked();
    void on_buttonHangUp_clicked();
    void on_buttonHold_clicked();
    void on_buttonReceive_clicked();

private:
    Connection *con;
    Ui::PhoneWindow *ui;
    void getTable();
    void updateDataUser(statistic status, typeCall group);
    QString switchUserData(statistic stat);
    void sendMsg(QString str);
};

#endif // PHONEWINDOW_H
