/********************************************************************************
** Form generated from reading UI file 'contacts.ui'
**
** Created: Wed 19. Jun 21:34:39 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTS_H
#define UI_CONTACTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contacts
{
public:
    QTableView *tableView;
    QPushButton *buttonSelect;
    QPushButton *buttonCancel;

    void setupUi(QWidget *Contacts)
    {
        if (Contacts->objectName().isEmpty())
            Contacts->setObjectName(QString::fromUtf8("Contacts"));
        Contacts->resize(371, 385);
        tableView = new QTableView(Contacts);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 36, 327, 301));
        buttonSelect = new QPushButton(Contacts);
        buttonSelect->setObjectName(QString::fromUtf8("buttonSelect"));
        buttonSelect->setGeometry(QRect(10, 350, 75, 23));
        buttonCancel = new QPushButton(Contacts);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setGeometry(QRect(90, 350, 75, 23));

        retranslateUi(Contacts);

        QMetaObject::connectSlotsByName(Contacts);
    } // setupUi

    void retranslateUi(QWidget *Contacts)
    {
        Contacts->setWindowTitle(QApplication::translate("Contacts", "Form", 0, QApplication::UnicodeUTF8));
        buttonSelect->setText(QApplication::translate("Contacts", "Select", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("Contacts", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Contacts: public Ui_Contacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTS_H
