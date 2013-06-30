#include "action.h"

Action::Action()
{
    mapAct["CO"] = CO;//originate
    mapAct["CE"] = CE;//established
    mapAct["CT"] = CT;//transfer
    mapAct["CH"] = CH;//hold
    mapAct["CR"] = CR;//retrieved
    mapAct["CC"] = CC;//cal cleard
    mapAct["IN"] = IN;//in/out of service
    mapAct["IC"] = IC;//in conference
    mapAct["CA"] = CA;//conference extended
    mapAct["GR"] = GR;//group
}

Action Action::Parse(std::string str)
{
    Action act;
    act.extension = atoi(Read(str).c_str());
    act.type = switchType(Read(str), mapAct);
    act.secondParty = atoi(Read(str).c_str());//problem with number starting from 0
    act.thirdParty = atoi(Read(str).c_str());
    act.callID = atoi(Read(str).c_str());//rand
    return act;
}

std::string Action::Read(std::string &str)
{
    std::string tmp;
    int i = 0;
    const char* cStr = str.c_str();
    while(cStr[i] != '\n' && cStr[i] != '\0' && cStr[i] != ' ')
    {
        tmp += cStr[i];
        i++;
    }
    str.erase(0,i+1);
    return  tmp;
}

actionType Action::switchType(std::string str, std::map<std::string, actionType> mapAct)
{
    actionType type;
    std::map<std::string, actionType>::iterator i = mapAct.find(str);
    if (i == mapAct.end())
     {
       //"No value could be found.";
     }
    else
     {
        type = mapAct[str];
     }
    return type;
}
