#include <QtGui/QApplication>
#include "authorization.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Authorization aut;
    aut.show();
    //PhoneWindow w;
    //w.show();
    //GetMessageFromServ getMsg;
    //getMsg.TypeMessage("USR\n123456789\nNAME\nONLINE\n2013-05-20 00:00:00\nENGINEER");
    //getMsg.TypeMessage("ACT\n123456789\nCO\n999999\nNULL\n1");
    /*
ACT
123456789
CO
999999
NULL
1
      */
    return a.exec();
}
