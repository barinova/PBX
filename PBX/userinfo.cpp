#include "userinfo.h"

UserInfo::UserInfo()
{
    mapStatus["ONLINE"] = ONLINE;
    mapStatus["OFFLINE"] = OFFLINE;
    mapStatus["AWAY"] = AWAY;
    mapStatus["BUSY"] = BUSY;
    mapStatus["CONFERENCE"] = CONFERENCE;

    mapType["ENGINEER"] = ENGINEER;
    mapType["TESTER"] = TESTER;
    mapType["HR"] = HR;
}
//"USR\n123456789\nNAME\nONLINE\n2013-05-20 00:00:00\nENGINEER"
UserInfo UserInfo::Parse(std::string str)
{
    UserInfo usr;
    usr.extension = atoi(Read(str).c_str());//Read(cStr)
    usr.name = Read(str);
    usr.status = switchStat(Read(str), mapStatus);
    usr.timestamp = returnTime(Read(str));
    usr.type = switchCall(Read(str), mapType);
    return usr;
}

std::string UserInfo::Read(std::string &str)
{
    std::string tmp;
    int i = 0;
    const char* cStr = str.c_str();
    while(cStr[i]!='\n' && cStr[i]!='\0')
    {
        tmp += cStr[i];
        i++;
    }
    str.erase(0,i+1);
    return  tmp;
}

statistic UserInfo::switchStat(std::string str, std::map<std::string, statistic> mapStatus)
{
    statistic stat;
     std::map<std::string, statistic>::iterator i = mapStatus.find(str);
     if (i == mapStatus.end())
     {
       //"No value could be found.";
     }
     else
     {
        stat = mapStatus[str];
     }
    return stat;
}

typeCall UserInfo::switchCall(std::string str, std::map<std::string, typeCall> mapType)
{
    typeCall call;
    std::map<std::string, typeCall>::iterator i = mapType.find(str);
    if (i == mapType.end())
    {
      //"No value could be found.";
    }
    else
    {
       call = mapType[str];
    }
    /*switch(mapType[i])
        {
        case ENGINEER: {call = ENGINEER; break;};
        case TESTER: {call = TESTER; break;};
        case HR: {call = HR; break;};
    default: {stat = NULL; break;};// RETURN ERROR
        }*/
    return call;
}

time_t UserInfo::returnTime(std::string str)
{
    //!!!
    struct tm t;
    strftime((char*)str.c_str(),80, "%Y-%m-%d %H:%M:%S", &t);//2013-05-20 00:00:00 (size_t)
    time_t t2 = mktime(&t);
    return t2;
}
