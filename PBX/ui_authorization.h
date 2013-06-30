/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created: Wed 19. Jun 21:34:39 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;
    QLineEdit *lineNumber;

    void setupUi(QDialog *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QString::fromUtf8("Authorization"));
        Authorization->resize(241, 163);
        horizontalLayoutWidget = new QWidget(Authorization);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 60, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonOK = new QPushButton(horizontalLayoutWidget);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));

        horizontalLayout->addWidget(buttonOK);

        buttonCancel = new QPushButton(horizontalLayoutWidget);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);

        lineNumber = new QLineEdit(Authorization);
        lineNumber->setObjectName(QString::fromUtf8("lineNumber"));
        lineNumber->setGeometry(QRect(20, 40, 191, 20));

        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QDialog *Authorization)
    {
        Authorization->setWindowTitle(QApplication::translate("Authorization", "Authorization", 0, QApplication::UnicodeUTF8));
        buttonOK->setText(QApplication::translate("Authorization", "OK", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("Authorization", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
