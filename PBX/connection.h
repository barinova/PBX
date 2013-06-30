#ifndef CONNECTION_H
#define CONNECTION_H
#include <QWidget>
#include <QByteArray>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include "userinfo.h"
#include "action.h"
#include <fstream>
namespace Ui {
class Connection;
}

class Connection : public QWidget
{
    Q_OBJECT

public:
    explicit Connection(QWidget *parent = 0);
    QByteArray data;
    int myExtention;
    void setNumber(int extension);
    ~Connection();
public slots:
    void SendMessage();
    void GetMessage();
    void displayError(QAbstractSocket::SocketError socketError);
    void recieveFromInOut(QString str);
    void establishedFromInOut(QString str);
private slots:
    void on_sendButton_clicked();
signals:
    void sendToPhoneWindow(QString str);
    void sendToServ(QString str);
private:
    Ui::Connection *ui;
    QTcpSocket *client;
    QHostAddress s_address;
    quint16 s_port;
    void TypeMessage(std::string str);
    void saveHistory(std::string str, UserInfo getMsg);
    void saveHistory(std::string str, Action getMsgAct);
    void setAction(Action action);
};

#endif // CONNECTION_H
