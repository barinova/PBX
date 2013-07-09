#include "getmessagefrom.h"

GetMessageFrom::GetMessageFrom(QWidget *parent) :
    QWidget(parent)
{
}

GetMessageFrom::~GetMessageFrom()
{
}

QString GetMessageFrom::TypeMessage(std::string str)
{
    QString strReturn;
    std::string tmp = str.substr(0,3);
        if(tmp == "USR")
        {
            UserInfo userInfo;
            str.erase(0,4);
            //!!!
            strReturn = QString::fromStdString(str);
            userInfo = userInfo.Parse(str);
            saveHistory(tmp, userInfo);
        }
        else if(tmp == "ACT")
        {
            Action action;
            str.erase(0,4);
            action = action.Parse(str);
            saveHistory(tmp, action);
            strReturn = QString::fromStdString(setAction(action));
        }
        /*else
        {
            QMessageBox mBox;
            mBox.setText("Error type of message");
        }*/
        return strReturn;
}

void GetMessageFrom::saveHistory(std::string str, UserInfo getMsg)
{
    str += ".log";
    std::ofstream out;
    out.open(str.c_str());
    out << getMsg.extension;
    out << getMsg.name;
    out << getMsg.timestamp;
    out << getMsg.status;
    out << getMsg.type;
    out.put('\n');
    out.close();
}

void GetMessageFrom::saveHistory(std::string str, Action getMsg)
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

std::string GetMessageFrom::setAction(Action action)
{
    std::string str;
    switch(action.type)
    {
        case CO:
    {
        str = "ACT\n" + QString::number(action.secondParty).toStdString() + "\nCO\n" + QString::number(action.extension).toStdString() + "\n\n\n";
        emit forCallID(action.secondParty, action.extension, action.thirdParty, action.type);
        break;
    }
        case CE:  {str = "ACT\n" + QString::number(action.secondParty).toStdString() + "\nCE\n" + QString::number(action.extension).toStdString() + "\n\n\n"; break;}
        case CT:
    {
        str = "ACT\n" + QString::number(action.thirdParty).toStdString() + "\nCO\n" + QString::number(action.extension).toStdString() + "\n\n\n";
        emit forCallID(action.extension, action.secondParty, action.thirdParty, action.type);
        break;
    }
        //case CH:  {str = "CH"; break;}//HOLD
        //case CR:  {str = "CR"; break;}//RETRive
        case CC:  {
        emit forCallID(action.extension, action.secondParty, action.thirdParty, action.type);
        str = "ACT\n" + QString::number(action.secondParty).toStdString() + "\nCC\n" + QString::number(action.extension).toStdString() + "\n\n\n";
        break;}
        //case IN:  {str = "IN"; getDataAction(NULL, NULL, NULL);break;}
        //case IC:  {str = "IC"; getDataAction(NULL, NULL, CallID);break;}//new class conference
        //case CA:  {str = "CA"; getDataAction(NULL, NULL, CallID);break;}//new class conference
        //case GR:  {str = "GR"; getDataAction(NULL, NULL, CallID);break;}//rand + updateDataAction(new values)
    }
  return str;
}
