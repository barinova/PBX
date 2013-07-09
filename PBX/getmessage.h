#ifndef GETMESSAGE_H
#define GETMESSAGE_H
#include <string>
#include <QMessageBox>
#include "userinfo.h"
#include "action.h"
#include <fstream>
#include "inoutcall.h"
//#include <iostream>
#include <QMessageBox>
class GetMessageFromServ
{
public:
    GetMessageFromServ();
    void TypeMessage(std::string str);
    void saveHistory(std::string str, UserInfo getMsg);
    void saveHistory(std::string str, Action getMsgAct);
    void setAction(Action action);
};

#endif // GETMESSAGE_H
