/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created: Tue 9. Jul 03:20:57 2013
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
#include <QtGui/QFrame>
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buttonAdd;
    QPushButton *buttonDelete;
    QPushButton *buttonInsert;
    QPushButton *buttonUpdate;
    QPushButton *buttonCancel;
    QFrame *frameInfo;
    QTableView *tableView;
    QWidget *tab_2;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QPushButton *buttonSend;
    QFrame *frameMsg;
    QFrame *frame;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(564, 325);
        Server->setStyleSheet(QString::fromUtf8("#Server {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"#frame {\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}\n"
"#frame QPushButton {\n"
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
"#frame QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#frame QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"#frame QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
""
                        "border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        tabWidget = new QTabWidget(Server);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 546, 301));
        tabWidget->setStyleSheet(QString::fromUtf8("#tabWidger {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"#frameMsg {\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.5 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}\n"
"#frameInfo{\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.5 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}\n"
"#frameInfo QPushButton {\n"
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
"#frameInfo QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
""
                        "\n"
"#frameInfo QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"#frameInfo QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
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

        frameInfo = new QFrame(tab);
        frameInfo->setObjectName(QString::fromUtf8("frameInfo"));
        frameInfo->setGeometry(QRect(0, 0, 541, 281));
        frameInfo->setFrameShape(QFrame::StyledPanel);
        frameInfo->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frameInfo);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 411, 231));
        tabWidget->addTab(tab, QString());
        frameInfo->raise();
        verticalLayoutWidget->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(9, 9, 522, 111));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(9, 126, 522, 111));
        buttonSend = new QPushButton(tab_2);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));
        buttonSend->setGeometry(QRect(9, 243, 75, 23));
        frameMsg = new QFrame(tab_2);
        frameMsg->setObjectName(QString::fromUtf8("frameMsg"));
        frameMsg->setGeometry(QRect(0, 0, 541, 281));
        frameMsg->setFrameShape(QFrame::StyledPanel);
        frameMsg->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab_2, QString());
        frameMsg->raise();
        textEdit->raise();
        textBrowser->raise();
        buttonSend->raise();
        frame = new QFrame(Server);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 10, 581, 321));
        frame->setStyleSheet(QString::fromUtf8("#tabWidger {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"#frameCall {\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.5 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}\n"
"#frameTransfer{\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.5 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}\n"
"#frameCall QPushButton {\n"
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
"#frameCall QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
""
                        "}\n"
"\n"
"#frame QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"#frameCall QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"#frame QTabWidget Call {\n"
"background:gray; \n"
"color: white;\n"
"padding: 10px; \n"
"} "));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        tabWidget->raise();

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
