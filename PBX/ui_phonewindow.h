/********************************************************************************
** Form generated from reading UI file 'phonewindow.ui'
**
** Created: Sun 30. Jun 12:56:47 2013
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
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *labelRecord;
    QWidget *tabInfoAboutCall;
    QLabel *labelMembers;
    QLabel *labelTime;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelStatus;
    QLabel *labelGroup;
    QPushButton *buttonCall;
    QPushButton *buttonHangUp;
    QPushButton *buttonConference;
    QPushButton *buttonHold;
    QPushButton *buttonRetreive;
    QPushButton *buttonExit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PhoneWindow)
    {
        if (PhoneWindow->objectName().isEmpty())
            PhoneWindow->setObjectName(QString::fromUtf8("PhoneWindow"));
        PhoneWindow->resize(533, 450);
        centralWidget = new QWidget(PhoneWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 351, 371));
        tabContact = new QWidget();
        tabContact->setObjectName(QString::fromUtf8("tabContact"));
        verticalLayout = new QVBoxLayout(tabContact);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(tabContact);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        labelRecord = new QLabel(tabContact);
        labelRecord->setObjectName(QString::fromUtf8("labelRecord"));

        verticalLayout->addWidget(labelRecord);

        tabWidget->addTab(tabContact, QString());
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
        listWidget->setGeometry(QRect(10, 30, 201, 301));
        tabWidget->addTab(tabInfoAboutCall, QString());
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(370, 30, 131, 311));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelStatus = new QLabel(verticalLayoutWidget);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        verticalLayout_2->addWidget(labelStatus);

        labelGroup = new QLabel(verticalLayoutWidget);
        labelGroup->setObjectName(QString::fromUtf8("labelGroup"));

        verticalLayout_2->addWidget(labelGroup);

        buttonCall = new QPushButton(verticalLayoutWidget);
        buttonCall->setObjectName(QString::fromUtf8("buttonCall"));

        verticalLayout_2->addWidget(buttonCall);

        buttonHangUp = new QPushButton(verticalLayoutWidget);
        buttonHangUp->setObjectName(QString::fromUtf8("buttonHangUp"));

        verticalLayout_2->addWidget(buttonHangUp);

        buttonConference = new QPushButton(verticalLayoutWidget);
        buttonConference->setObjectName(QString::fromUtf8("buttonConference"));
        buttonConference->setEnabled(false);
        buttonConference->setCheckable(false);
        buttonConference->setAutoDefault(false);
        buttonConference->setDefault(false);
        buttonConference->setFlat(false);

        verticalLayout_2->addWidget(buttonConference);

        buttonHold = new QPushButton(verticalLayoutWidget);
        buttonHold->setObjectName(QString::fromUtf8("buttonHold"));

        verticalLayout_2->addWidget(buttonHold);

        buttonRetreive = new QPushButton(verticalLayoutWidget);
        buttonRetreive->setObjectName(QString::fromUtf8("buttonRetreive"));

        verticalLayout_2->addWidget(buttonRetreive);

        buttonExit = new QPushButton(verticalLayoutWidget);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));

        verticalLayout_2->addWidget(buttonExit);

        PhoneWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PhoneWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 21));
        PhoneWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PhoneWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PhoneWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PhoneWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PhoneWindow->setStatusBar(statusBar);

        retranslateUi(PhoneWindow);

        tabWidget->setCurrentIndex(0);


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
        labelStatus->setText(QString());
        labelGroup->setText(QString());
        buttonCall->setText(QApplication::translate("PhoneWindow", "Call", 0, QApplication::UnicodeUTF8));
        buttonHangUp->setText(QApplication::translate("PhoneWindow", "Hang Up", 0, QApplication::UnicodeUTF8));
        buttonConference->setText(QApplication::translate("PhoneWindow", "Conference", 0, QApplication::UnicodeUTF8));
        buttonHold->setText(QApplication::translate("PhoneWindow", "Hold", 0, QApplication::UnicodeUTF8));
        buttonRetreive->setText(QApplication::translate("PhoneWindow", "Retrieve", 0, QApplication::UnicodeUTF8));
        buttonExit->setText(QApplication::translate("PhoneWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PhoneWindow: public Ui_PhoneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEWINDOW_H
