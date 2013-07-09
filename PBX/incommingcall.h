#ifndef INCOMMINGCALL_H
#define INCOMMINGCALL_H

#include <QWidget>

namespace Ui {
class IncommingCall;
}

class IncommingCall : public QWidget
{
    Q_OBJECT
    
public:
    explicit IncommingCall(QWidget *parent = 0);
    ~IncommingCall();
    
private:
    Ui::IncommingCall *ui;
};

#endif // INCOMMINGCALL_H
