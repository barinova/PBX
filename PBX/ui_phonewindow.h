/********************************************************************************
** Form generated from reading UI file 'phonewindow.ui'
**
** Created: Wed 10. Jul 21:27:16 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEWINDOW_H
#define UI_PHONEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabContact;
    QTableView *tableView;
    QLabel *labelRecord;
    QFrame *frameContacts;
    QWidget *tabInfoAboutCall;
    QLabel *labelMembers;
    QLabel *labelTime;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QFrame *frameActiveCalls;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayoutButton;
    QPushButton *buttonCall;
    QPushButton *buttonHangUp;
    QPushButton *buttonConference;
    QPushButton *buttonHold;
    QPushButton *buttonRetreive;
    QPushButton *buttonUpdateContacts;
    QPushButton *buttonExit;
    QLabel *labelStatus;
    QLabel *labelGroup;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonToGroup;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PhoneWindow)
    {
        if (PhoneWindow->objectName().isEmpty())
            PhoneWindow->setObjectName(QString::fromUtf8("PhoneWindow"));
        PhoneWindow->resize(613, 534);
        PhoneWindow->setStyleSheet(QString::fromUtf8("#PhoneWindow {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"#frame {\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.5 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}\n"
"#PhoneWindow QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"#PhoneWindow QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#PhoneWindow QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
"#PhoneWindow QLineEdit {\n"
"padding: 1px"
                        ";\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        centralWidget = new QWidget(PhoneWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 441, 451));
        tabContact = new QWidget();
        tabContact->setObjectName(QString::fromUtf8("tabContact"));
        tableView = new QTableView(tabContact);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(9, 9, 421, 411));
        labelRecord = new QLabel(tabContact);
        labelRecord->setObjectName(QString::fromUtf8("labelRecord"));
        labelRecord->setGeometry(QRect(9, 323, 16, 16));
        frameContacts = new QFrame(tabContact);
        frameContacts->setObjectName(QString::fromUtf8("frameContacts"));
        frameContacts->setGeometry(QRect(0, 0, 441, 431));
        frameContacts->setStyleSheet(QString::fromUtf8("#tabWidget {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"#frameContacts {\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}"));
        frameContacts->setFrameShape(QFrame::StyledPanel);
        frameContacts->setFrameShadow(QFrame::Raised);
        tableView->raise();
        tabWidget->addTab(tabContact, QString());
        frameContacts->raise();
        tableView->raise();
        labelRecord->raise();
        tabInfoAboutCall = new QWidget();
        tabInfoAboutCall->setObjectName(QString::fromUtf8("tabInfoAboutCall"));
        labelMembers = new QLabel(tabInfoAboutCall);
        labelMembers->setObjectName(QString::fromUtf8("labelMembers"));
        labelMembers->setGeometry(QRect(10, 10, 91, 16));
        labelTime = new QLabel(tabInfoAboutCall);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setGeometry(QRect(220, 10, 91, 16));
        lineEdit = new QLineEdit(tabInfoAboutCall);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 30, 113, 20));
        listWidget = new QListWidget(tabInfoAboutCall);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 201, 381));
        frameActiveCalls = new QFrame(tabInfoAboutCall);
        frameActiveCalls->setObjectName(QString::fromUtf8("frameActiveCalls"));
        frameActiveCalls->setGeometry(QRect(-1, 0, 441, 441));
        frameActiveCalls->setStyleSheet(QString::fromUtf8("\n"
"#frameActiveCalls {\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.5 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}\n"
"#frameActiveCalls QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        frameActiveCalls->setFrameShape(QFrame::StyledPanel);
        frameActiveCalls->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tabInfoAboutCall, QString());
        frameActiveCalls->raise();
        labelMembers->raise();
        labelTime->raise();
        lineEdit->raise();
        listWidget->raise();
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 10, 611, 481));
        frame->setStyleSheet(QString::fromUtf8("#labelGroup{\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"#labelStatus{\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(460, 123, 131, 339));
        verticalLayoutButton = new QVBoxLayout(verticalLayoutWidget);
        verticalLayoutButton->setSpacing(6);
        verticalLayoutButton->setContentsMargins(11, 11, 11, 11);
        verticalLayoutButton->setObjectName(QString::fromUtf8("verticalLayoutButton"));
        verticalLayoutButton->setContentsMargins(0, 0, 0, 0);
        buttonCall = new QPushButton(verticalLayoutWidget);
        buttonCall->setObjectName(QString::fromUtf8("buttonCall"));

        verticalLayoutButton->addWidget(buttonCall);

        buttonHangUp = new QPushButton(verticalLayoutWidget);
        buttonHangUp->setObjectName(QString::fromUtf8("buttonHangUp"));

        verticalLayoutButton->addWidget(buttonHangUp);

        buttonConference = new QPushButton(verticalLayoutWidget);
        buttonConference->setObjectName(QString::fromUtf8("buttonConference"));
        buttonConference->setEnabled(false);
        buttonConference->setCheckable(false);
        buttonConference->setAutoDefault(false);
        buttonConference->setDefault(false);
        buttonConference->setFlat(false);

        verticalLayoutButton->addWidget(buttonConference);

        buttonHold = new QPushButton(verticalLayoutWidget);
        buttonHold->setObjectName(QString::fromUtf8("buttonHold"));

        verticalLayoutButton->addWidget(buttonHold);

        buttonRetreive = new QPushButton(verticalLayoutWidget);
        buttonRetreive->setObjectName(QString::fromUtf8("buttonRetreive"));

        verticalLayoutButton->addWidget(buttonRetreive);

        buttonUpdateContacts = new QPushButton(verticalLayoutWidget);
        buttonUpdateContacts->setObjectName(QString::fromUtf8("buttonUpdateContacts"));

        verticalLayoutButton->addWidget(buttonUpdateContacts);

        buttonExit = new QPushButton(verticalLayoutWidget);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));

        verticalLayoutButton->addWidget(buttonExit);

        labelStatus = new QLabel(frame);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setGeometry(QRect(530, 0, 81, 31));
        labelGroup = new QLabel(frame);
        labelGroup->setObjectName(QString::fromUtf8("labelGroup"));
        labelGroup->setGeometry(QRect(450, 0, 81, 31));
        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(460, 30, 131, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonToGroup = new QPushButton(verticalLayoutWidget_2);
        buttonToGroup->setObjectName(QString::fromUtf8("buttonToGroup"));

        verticalLayout->addWidget(buttonToGroup);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        labelStatus->raise();
        verticalLayoutWidget->raise();
        labelGroup->raise();
        tabWidget->raise();
        tabWidget->raise();
        tabWidget->raise();
        verticalLayoutWidget_2->raise();
        PhoneWindow->setCentralWidget(centralWidget);
        frame->raise();
        tabWidget->raise();
        menuBar = new QMenuBar(PhoneWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 613, 21));
        PhoneWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PhoneWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PhoneWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PhoneWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PhoneWindow->setStatusBar(statusBar);

        retranslateUi(PhoneWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PhoneWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PhoneWindow)
    {
        PhoneWindow->setWindowTitle(QApplication::translate("PhoneWindow", "PhoneWindow", 0, QApplication::UnicodeUTF8));
        labelRecord->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabContact), QApplication::translate("PhoneWindow", "Contacts", 0, QApplication::UnicodeUTF8));
        labelMembers->setText(QApplication::translate("PhoneWindow", "Members", 0, QApplication::UnicodeUTF8));
        labelTime->setText(QApplication::translate("PhoneWindow", "Time", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabInfoAboutCall), QApplication::translate("PhoneWindow", "Active Calls", 0, QApplication::UnicodeUTF8));
        buttonCall->setText(QApplication::translate("PhoneWindow", "Call", 0, QApplication::UnicodeUTF8));
        buttonHangUp->setText(QApplication::translate("PhoneWindow", "Hang Up", 0, QApplication::UnicodeUTF8));
        buttonConference->setText(QApplication::translate("PhoneWindow", "Conference", 0, QApplication::UnicodeUTF8));
        buttonHold->setText(QApplication::translate("PhoneWindow", "Hold", 0, QApplication::UnicodeUTF8));
        buttonRetreive->setText(QApplication::translate("PhoneWindow", "Retrieve", 0, QApplication::UnicodeUTF8));
        buttonUpdateContacts->setText(QApplication::translate("PhoneWindow", "Update contacts", 0, QApplication::UnicodeUTF8));
        buttonExit->setText(QApplication::translate("PhoneWindow", "Exit", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QString());
        labelGroup->setText(QString());
        buttonToGroup->setText(QApplication::translate("PhoneWindow", "Call to Group", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PhoneWindow: public Ui_PhoneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEWINDOW_H
