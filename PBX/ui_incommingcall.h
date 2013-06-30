/********************************************************************************
** Form generated from reading UI file 'incommingcall.ui'
**
** Created: Wed 22. May 23:56:04 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMMINGCALL_H
#define UI_INCOMMINGCALL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IncommingCall
{
public:

    void setupUi(QWidget *IncommingCall)
    {
        if (IncommingCall->objectName().isEmpty())
            IncommingCall->setObjectName(QString::fromUtf8("IncommingCall"));
        IncommingCall->resize(400, 300);

        retranslateUi(IncommingCall);

        QMetaObject::connectSlotsByName(IncommingCall);
    } // setupUi

    void retranslateUi(QWidget *IncommingCall)
    {
        IncommingCall->setWindowTitle(QApplication::translate("IncommingCall", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IncommingCall: public Ui_IncommingCall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMMINGCALL_H
