#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if(translatorFa.load("D:/Projects/Qt-Linguist/Qt-Linguist/translation_fa.qm"))
        qDebug()<<"successfully load translation_fa file.";
    if(translatorGe.load("D:/Projects/Qt-Linguist/Qt-Linguist/translation_ge.qm"))
        qDebug()<<"successfully load translation_ge file.";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnEnglish_clicked()
{
    qApp->removeTranslator(&translatorFa);
    qApp->removeTranslator(&translatorGe);
}

void MainWindow::on_btnGerman_clicked()
{
    qApp->installTranslator(&translatorGe);
}

void MainWindow::on_btnPersian_clicked()
{
    qApp->installTranslator(&translatorFa);
}
