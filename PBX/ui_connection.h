/********************************************************************************
** Form generated from reading UI file 'connection.ui'
**
** Created: Sun 9. Jun 00:35:04 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTION_H
#define UI_CONNECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Connection
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *browserGetMessage;
    QTextEdit *editMessage;
    QPushButton *sendButton;

    void setupUi(QWidget *Connection)
    {
        if (Connection->objectName().isEmpty())
            Connection->setObjectName(QString::fromUtf8("Connection"));
        Connection->resize(400, 300);
        verticalLayout = new QVBoxLayout(Connection);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        browserGetMessage = new QTextBrowser(Connection);
        browserGetMessage->setObjectName(QString::fromUtf8("browserGetMessage"));

        verticalLayout->addWidget(browserGetMessage);

        editMessage = new QTextEdit(Connection);
        editMessage->setObjectName(QString::fromUtf8("editMessage"));

        verticalLayout->addWidget(editMessage);

        sendButton = new QPushButton(Connection);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        verticalLayout->addWidget(sendButton);


        retranslateUi(Connection);

        QMetaObject::connectSlotsByName(Connection);
    } // setupUi

    void retranslateUi(QWidget *Connection)
    {
        Connection->setWindowTitle(QApplication::translate("Connection", "Form", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("Connection", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Connection: public Ui_Connection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTION_H
