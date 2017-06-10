#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void sayiGoster();
    void on_btnC_released();
    void operatorProcess();
    void on_btnNEGATIF_released();
    void on_btnYUZDE_released();

    void on_btnESIT_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
