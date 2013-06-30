/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created: Sun 30. Jun 14:19:18 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buttonAdd;
    QPushButton *buttonDelete;
    QPushButton *buttonInsert;
    QPushButton *buttonUpdate;
    QPushButton *buttonCancel;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QPushButton *buttonSend;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(564, 325);
        verticalLayout = new QVBoxLayout(Server);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Server);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 411, 251));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(430, 20, 101, 141));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        buttonAdd = new QPushButton(verticalLayoutWidget);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        verticalLayout_3->addWidget(buttonAdd);

        buttonDelete = new QPushButton(verticalLayoutWidget);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));

        verticalLayout_3->addWidget(buttonDelete);

        buttonInsert = new QPushButton(verticalLayoutWidget);
        buttonInsert->setObjectName(QString::fromUtf8("buttonInsert"));

        verticalLayout_3->addWidget(buttonInsert);

        buttonUpdate = new QPushButton(verticalLayoutWidget);
        buttonUpdate->setObjectName(QString::fromUtf8("buttonUpdate"));

        verticalLayout_3->addWidget(buttonUpdate);

        buttonCancel = new QPushButton(verticalLayoutWidget);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        verticalLayout_3->addWidget(buttonCancel);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        buttonSend = new QPushButton(tab_2);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));

        verticalLayout_2->addWidget(buttonSend);

        tabWidget->addTab(tab_2, QString());
        textEdit->raise();
        textBrowser->raise();
        textEdit->raise();
        textBrowser->raise();
        buttonSend->raise();

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Server);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QApplication::translate("Server", "Server", 0, QApplication::UnicodeUTF8));
        buttonAdd->setText(QApplication::translate("Server", "Add", 0, QApplication::UnicodeUTF8));
        buttonDelete->setText(QApplication::translate("Server", "Delete", 0, QApplication::UnicodeUTF8));
        buttonInsert->setText(QApplication::translate("Server", "Insert", 0, QApplication::UnicodeUTF8));
        buttonUpdate->setText(QApplication::translate("Server", "Update", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("Server", "Cancel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Server", "Info", 0, QApplication::UnicodeUTF8));
        buttonSend->setText(QApplication::translate("Server", "Send", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Server", "Message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
