#ifndef GETMESSAGEFROM_H
#define GETMESSAGEFROM_H

#include <QWidget>
#include <userinfo.h>
#include <action.h>
#include <QMessageBox>
#include <fstream>
namespace Ui {
class GetMessageFrom;
}

class GetMessageFrom : public QWidget
{
    Q_OBJECT
    
public:
    explicit GetMessageFrom(QWidget *parent = 0);
    ~GetMessageFrom();
    QString TypeMessage(std::string str);
    void saveHistory(std::string str, UserInfo getMsg);
    void saveHistory(std::string str, Action getMsgAct);
    std::string setAction(Action action);

signals:
    void forCallID(int first, int second, int third, actionType type);

private:
    Ui::GetMessageFrom *ui;
};

#endif // GETMESSAGEFROM_H
