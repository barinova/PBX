#include "speakwindow.h"
#include "ui_speakwindow.h"

SpeakWindow::SpeakWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpeakWindow)
{
    ui->setupUi(this);
}

SpeakWindow::~SpeakWindow()
{
    delete ui;
}
