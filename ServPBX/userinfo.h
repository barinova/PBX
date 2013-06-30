#include <string>
#include <stdlib.h>
#include <map>
#include <time.h>
#include <QtGui/QWidget>
#ifndef USERINFO_H
#define USERINFO_H

enum  statistic { ONLINE , OFFLINE, AWAY, BUSY, CONFERENCE};
enum typeCall { ENGINEER, TESTER, HR};
class UserInfo
{
public:
    int extension;//EXT
    std::string name;//NAM
    statistic status;//STS
    time_t timestamp;//TST
    typeCall type;//TYP
    std::map<std::string, statistic> mapStatus;
    std::map<std::string, typeCall> mapType;

    UserInfo();
    UserInfo Parse(std::string str);
    std::string Read(std::string &str);
    statistic switchStat(std::string str, std::map<std::string, statistic> mapStatus);
    time_t returnTime(std::string str);
    typeCall switchCall(std::string str, std::map<std::string, typeCall> mapType);
};
#endif // USERINFO_H
