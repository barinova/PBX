/********************************************************************************
** Form generated from reading UI file 'inoutcall.ui'
**
** Created: Wed 19. Jun 21:34:39 2013
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
    QTabWidget *tabWidget;
    QWidget *Call;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonCall;
    QPushButton *buttonDesline;
    QPushButton *buttonAnswer;
    QPushButton *buttonTransfer;
    QLabel *labelInOut;
    QLabel *labelInOutNum;
    QWidget *Transfer;
    QTableView *tableView;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonSelectNum;
    QPushButton *buttonCancel;

    void setupUi(QWidget *InOutCall)
    {
        if (InOutCall->objectName().isEmpty())
            InOutCall->setObjectName(QString::fromUtf8("InOutCall"));
        InOutCall->resize(422, 295);
        verticalLayout = new QVBoxLayout(InOutCall);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(InOutCall);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setFocusPolicy(Qt::StrongFocus);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        Call = new QWidget();
        Call->setObjectName(QString::fromUtf8("Call"));
        horizontalLayoutWidget = new QWidget(Call);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 190, 320, 51));
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

        labelInOut = new QLabel(Call);
        labelInOut->setObjectName(QString::fromUtf8("labelInOut"));
        labelInOut->setGeometry(QRect(20, 40, 121, 31));
        labelInOutNum = new QLabel(Call);
        labelInOutNum->setObjectName(QString::fromUtf8("labelInOutNum"));
        labelInOutNum->setGeometry(QRect(140, 40, 201, 31));
        tabWidget->addTab(Call, QString());
        Transfer = new QWidget();
        Transfer->setObjectName(QString::fromUtf8("Transfer"));
        tableView = new QTableView(Transfer);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 10, 381, 171));
        horizontalLayoutWidget_2 = new QWidget(Transfer);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 190, 161, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonSelectNum = new QPushButton(horizontalLayoutWidget_2);
        buttonSelectNum->setObjectName(QString::fromUtf8("buttonSelectNum"));

        horizontalLayout_2->addWidget(buttonSelectNum);

        buttonCancel = new QPushButton(horizontalLayoutWidget_2);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);

        tabWidget->addTab(Transfer, QString());

        verticalLayout->addWidget(tabWidget);


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
