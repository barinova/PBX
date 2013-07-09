#include "getmessage.h"

GetMessageFromServ::GetMessageFromServ()
{
    //TypeMessage("USR\n123456789\nNAME\nONLINE\n2013-05-20 00:00:00\nENGINEER");
}

void GetMessageFromServ::TypeMessage(std::string str)
{
    std::string tmp = str.substr(0,3);
    if(tmp == "USR")
    {
        UserInfo userInfo;
        str.erase(0,5);
        userInfo = userInfo.Parse(str);
        saveHistory(tmp, userInfo);
    }
    else if(tmp == "ACT")
    {
        Action action;
        str.erase(0,5);
        action = action.Parse(str);
        saveHistory(tmp, action);
    }
    else
    {
        QMessageBox mBox;
        mBox.setText("Error type of message");
    }
}

void GetMessageFromServ::saveHistory(std::string str, UserInfo getMsg)
{
    str += ".log";
    std::ofstream out;
    out.open(str.c_str());
    out << getMsg.extension;
    out << getMsg.name;
    out << getMsg.timestamp;
    //!!!
    //ToString???
    out << getMsg.status;
    out << getMsg.type;
    out.put('\n');
    out.close();
}

void GetMessageFromServ::saveHistory(std::string str, Action getMsg)
{
    str += ".log";
    std::ofstream out;
    out.open(str.c_str());
    out << getMsg.extension << "\n";
    //!!!
    out << getMsg.type << "\n";
    out << getMsg.secondParty << "\n";
    out << getMsg.thirdParty << "\n";
    out << getMsg.callID << "\n";
    out.put('\n');
    out.close();
}

void GetMessageFromServ::setAction(Action action)
{
    QString str;
    InOutCall *inout = new InOutCall();
    inout->setLable("incomming", QString(action.extension));
    inout->show();
    switch(action.type)
    {
    case CO:  {str = "CO"; QMessageBox box;
    box.show();
    box.setText(str);}//getDataAction(secPart, NULL, NULL);break;}
        //case CE:  {str = "CE"; getDataAction(secPart, NULL, CallID);break;}
        //case CT:  {str = "CT"; getDataAction(secPart, thirdPart, CallID);break;}
        //case CH:  {str = "CH"; break;}//HOLD
        //case CR:  {str = "CR"; break;}//RETRive
        //case CC:  {str = "CC"; getDataAction(NULL, NULL, NULL);break;}
        //case IN:  {str = "IN"; getDataAction(NULL, NULL, NULL);break;}
        //case IC:  {str = "IC"; getDataAction(NULL, NULL, CallID);break;}//new class conference
        //case CA:  {str = "CA"; getDataAction(NULL, NULL, CallID);break;}//new class conference
        //case GR:  {str = "GR"; getDataAction(NULL, NULL, CallID);break;}//rand + updateDataAction(new values)
    }

}
