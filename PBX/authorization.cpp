#include "authorization.h"
#include "ui_authorization.h"

Authorization::Authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_buttonOK_clicked()
{
    PhoneWindow *pWindow = new PhoneWindow();
    pWindow->setNumber(ui->lineNumber->text());
    pWindow->show();
    this->close();
}

void Authorization::on_buttonCancel_clicked()
{
    this->close();
}
