#ifndef GETMESSAGEFROM_H
#define GETMESSAGEFROM_H
//#include <QString>
#include <QWidget>
#include <userinfo.h>
#include <action.h>
#include <QMessageBox>
#include <fstream>
class GetMessageFrom
{

public:
    GetMessageFrom();
    QString TypeMessage(std::string str);
    void saveHistory(std::string str, UserInfo getMsg);
    void saveHistory(std::string str, Action getMsgAct);
    std::string setAction(Action action);

};

#endif // GETMESSAGE_H
