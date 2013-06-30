#ifndef ACTION_H
#define ACTION_H
#include <string>
#include <map>
#include <stdlib.h>

enum actionType
{
    CO,//call origination
    CE,//call established
    CT,//call transfer
    CH,//call hold
    CR,//call retrieved
    CC,
    IN,//in service
    IC,//in conference
    CA,//conference added
    GR//group

};

class Action
{
   public:
    int extension;//EXT
    actionType type;//TYP
    int secondParty;//SEC
    int thirdParty;//THI
    int callID;//CID
    std::map<std::string, actionType> mapAct;
    Action();
    Action Parse(std::string str);
    std::string Read(std::string &str);
    actionType switchType(std::string str, std::map<std::string, actionType> mapAct);
};

#endif // ACTION_H
