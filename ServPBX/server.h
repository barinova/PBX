#ifndef SERVER_H
#define SERVER_H

#include <QtGui/QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include "getmessagefrom.h"
#include "action.h"
#include "userinfo.h"
#include <stdlib.h>
#include <QtSQL>
#include <QSqlQuery>
#define dataBaseName "C:/Users/A/Desktop/Examples/Contacts"

struct lstCon
{
    int extension;
    QTcpSocket * tcpSock;
};

struct CallID
{
    int id;
    int firstParty;
    int secondParty;
    int thirdParty;
};

namespace Ui {
class Server;
}

class Server : public QWidget
{
    Q_OBJECT
public:
    explicit Server(QWidget *parent = 0);
    ~Server();
    int getCallID();
    QList<lstCon> listConnect;
    QList<CallID> callID;

public slots:
    void NewClient();
    void GetMessage();
    void setCallID(int first, int second, int third, actionType type);

private slots:
    void on_buttonSend_clicked();
    void on_buttonAdd_clicked();
    void on_buttonCancel_clicked();
    void on_buttonInsert_clicked();
    void on_buttonDelete_clicked();
    void on_buttonUpdate_clicked();
    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::Server *ui;
    QTcpServer *server;
    QTcpSocket *client;
    QHostAddress s_address;
    quint16 s_port;
    qint64 bytes;
    QByteArray data;
    QSqlTableModel *model;
    QSqlDatabase db;
    void getTable();
    void sendToClient(QTcpSocket* pSocket, const QString& str);
    bool insertVal(int num, QString name, QString groups, QString status);
    bool deleteVal(int id);
    bool selectVal();
    void updateTable();
    void closeEvent(QCloseEvent *);
};

#endif // SERVER_H
