#ifndef SPEAKWINDOW_H
#define SPEAKWINDOW_H

#include <QWidget>

namespace Ui {
class SpeakWindow;
}

class SpeakWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit SpeakWindow(QWidget *parent = 0);
    ~SpeakWindow();
    
private:
    Ui::SpeakWindow *ui;
};

#endif // SPEAKWINDOW_H
