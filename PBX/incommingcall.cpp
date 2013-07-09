#include "incommingcall.h"
#include "ui_incommingcall.h"

IncommingCall::IncommingCall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IncommingCall)
{
    ui->setupUi(this);
}

IncommingCall::~IncommingCall()
{
    delete ui;
}
