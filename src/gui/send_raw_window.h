/**
* LICENSE PLACEHOLDER
*/

#ifndef _GUI_SENDRAWWINDOW_H
#define _GUI_SENDRAWWINDOW_H

#include <QMainWindow>
#include "ui_send_raw_window.h"

namespace Ui {
class SendRawWindow;
}

class SendRawWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SendRawWindow(QWidget *parent = 0);
    ~SendRawWindow();

private:
    Ui::SendRawWindow *ui;
};

#endif // _GUI_SENDRAWWINDOW_H
