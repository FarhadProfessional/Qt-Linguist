#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTranslator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent*);

private slots:
    void on_btnEnglish_clicked();
    void on_btnGerman_clicked();
    void on_btnPersian_clicked();

private:
    Ui::MainWindow *ui;
    QTranslator translatorFa;
    QTranslator translatorGe;
};

#endif // MAINWINDOW_H
