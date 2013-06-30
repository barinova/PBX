/********************************************************************************
** Form generated from reading UI file 'speakwindow.ui'
**
** Created: Thu 6. Jun 00:25:23 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEAKWINDOW_H
#define UI_SPEAKWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpeakWindow
{
public:

    void setupUi(QWidget *SpeakWindow)
    {
        if (SpeakWindow->objectName().isEmpty())
            SpeakWindow->setObjectName(QString::fromUtf8("SpeakWindow"));
        SpeakWindow->resize(400, 300);

        retranslateUi(SpeakWindow);

        QMetaObject::connectSlotsByName(SpeakWindow);
    } // setupUi

    void retranslateUi(QWidget *SpeakWindow)
    {
        SpeakWindow->setWindowTitle(QApplication::translate("SpeakWindow", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpeakWindow: public Ui_SpeakWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEAKWINDOW_H
