#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include "phonewindow.h"

namespace Ui {
class Authorization;
}

class Authorization : public QDialog
{
    Q_OBJECT
    
public:
    explicit Authorization(QWidget *parent = 0);
    ~Authorization();
    
private slots:
    void on_buttonOK_clicked();

    void on_buttonCancel_clicked();

private:
    Ui::Authorization *ui;
};

#endif // AUTHORIZATION_H
