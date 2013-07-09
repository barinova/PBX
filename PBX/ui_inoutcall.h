/********************************************************************************
** Form generated from reading UI file 'inoutcall.ui'
**
** Created: Tue 9. Jul 05:53:39 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INOUTCALL_H
#define UI_INOUTCALL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InOutCall
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QTabWidget *tabWidget;
    QWidget *Call;
    QFrame *frameCall;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonCall;
    QPushButton *buttonDesline;
    QPushButton *buttonAnswer;
    QPushButton *buttonTransfer;
    QFrame *frameInfo;
    QLabel *labelInOut;
    QLabel *labelInOutNum;
    QWidget *Transfer;
    QTableView *tableView;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonSelectNum;
    QPushButton *buttonCancel;
    QFrame *frameTransfer;

    void setupUi(QWidget *InOutCall)
    {
        if (InOutCall->objectName().isEmpty())
            InOutCall->setObjectName(QString::fromUtf8("InOutCall"));
        InOutCall->resize(510, 329);
        InOutCall->setStyleSheet(QString::fromUtf8("#InOutCall {\n"
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
        verticalLayout = new QVBoxLayout(InOutCall);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(InOutCall);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 481, 301));
        tabWidget->setFocusPolicy(Qt::StrongFocus);
        tabWidget->setStyleSheet(QString::fromUtf8("#tabWidger {\n"
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
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        Call = new QWidget();
        Call->setObjectName(QString::fromUtf8("Call"));
        frameCall = new QFrame(Call);
        frameCall->setObjectName(QString::fromUtf8("frameCall"));
        frameCall->setGeometry(QRect(0, -20, 501, 301));
        frameCall->setFrameShape(QFrame::StyledPanel);
        frameCall->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frameCall);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 220, 431, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonCall = new QPushButton(horizontalLayoutWidget);
        buttonCall->setObjectName(QString::fromUtf8("buttonCall"));

        horizontalLayout->addWidget(buttonCall);

        buttonDesline = new QPushButton(horizontalLayoutWidget);
        buttonDesline->setObjectName(QString::fromUtf8("buttonDesline"));

        horizontalLayout->addWidget(buttonDesline);

        buttonAnswer = new QPushButton(horizontalLayoutWidget);
        buttonAnswer->setObjectName(QString::fromUtf8("buttonAnswer"));

        horizontalLayout->addWidget(buttonAnswer);

        buttonTransfer = new QPushButton(horizontalLayoutWidget);
        buttonTransfer->setObjectName(QString::fromUtf8("buttonTransfer"));

        horizontalLayout->addWidget(buttonTransfer);

        frameInfo = new QFrame(frameCall);
        frameInfo->setObjectName(QString::fromUtf8("frameInfo"));
        frameInfo->setGeometry(QRect(20, 40, 441, 41));
        frameInfo->setStyleSheet(QString::fromUtf8("#frameInfo{\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
""));
        frameInfo->setFrameShape(QFrame::StyledPanel);
        frameInfo->setFrameShadow(QFrame::Raised);
        labelInOut = new QLabel(frameInfo);
        labelInOut->setObjectName(QString::fromUtf8("labelInOut"));
        labelInOut->setGeometry(QRect(0, 0, 121, 41));
        labelInOutNum = new QLabel(frameInfo);
        labelInOutNum->setObjectName(QString::fromUtf8("labelInOutNum"));
        labelInOutNum->setGeometry(QRect(160, 0, 201, 41));
        frameInfo->raise();
        horizontalLayoutWidget->raise();
        tabWidget->addTab(Call, QString());
        Transfer = new QWidget();
        Transfer->setObjectName(QString::fromUtf8("Transfer"));
        tableView = new QTableView(Transfer);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 371, 171));
        horizontalLayoutWidget_2 = new QWidget(Transfer);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 190, 196, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonSelectNum = new QPushButton(horizontalLayoutWidget_2);
        buttonSelectNum->setObjectName(QString::fromUtf8("buttonSelectNum"));

        horizontalLayout_2->addWidget(buttonSelectNum);

        buttonCancel = new QPushButton(horizontalLayoutWidget_2);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);

        frameTransfer = new QFrame(Transfer);
        frameTransfer->setObjectName(QString::fromUtf8("frameTransfer"));
        frameTransfer->setGeometry(QRect(-1, 0, 481, 281));
        frameTransfer->setStyleSheet(QString::fromUtf8("#frameInfo {\n"
"border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.5 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}"));
        frameTransfer->setFrameShape(QFrame::StyledPanel);
        frameTransfer->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(Transfer, QString());
        frameTransfer->raise();
        tableView->raise();
        horizontalLayoutWidget_2->raise();

        verticalLayout->addWidget(frame);


        retranslateUi(InOutCall);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InOutCall);
    } // setupUi

    void retranslateUi(QWidget *InOutCall)
    {
        InOutCall->setWindowTitle(QApplication::translate("InOutCall", "Form", 0, QApplication::UnicodeUTF8));
        buttonCall->setText(QApplication::translate("InOutCall", "Call", 0, QApplication::UnicodeUTF8));
        buttonDesline->setText(QApplication::translate("InOutCall", "Decline", 0, QApplication::UnicodeUTF8));
        buttonAnswer->setText(QApplication::translate("InOutCall", "Answer", 0, QApplication::UnicodeUTF8));
        buttonTransfer->setText(QApplication::translate("InOutCall", "Transfer", 0, QApplication::UnicodeUTF8));
        labelInOut->setText(QString());
        labelInOutNum->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Call), QApplication::translate("InOutCall", "Call", 0, QApplication::UnicodeUTF8));
        buttonSelectNum->setText(QApplication::translate("InOutCall", "Select", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("InOutCall", "Cancel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Transfer), QApplication::translate("InOutCall", "Transfer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InOutCall: public Ui_InOutCall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INOUTCALL_H
