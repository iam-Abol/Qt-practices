#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"
#include "qtimer.h"
#include "QTime"
#include <QApplication>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    timer->setInterval(1000);
    timer->start();
    connect(timer,SIGNAL(timeout()),SLOT(updateClock()));
}
void MainWindow::updateClock(){
    QString time=QTime().currentTime().toString("_hh:mm:ss_");
    ui->label->setText(time);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox myBox;
    myBox.setText("welcome");

    myBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
    myBox.setDefaultButton(QMessageBox::Save);
    myBox.setIcon(QMessageBox::Warning);
    int r=myBox.exec();
    switch (r) {
    case QMessageBox::Save :
        QApplication::exit();
        break;


    }

}
void MainWindow::on_actionexit_triggered()
{
    QMessageBox *myBox=new QMessageBox();

    myBox->setInformativeText("save ?");
    myBox->setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
    myBox->setDefaultButton(QMessageBox::Save);
    myBox->setIcon(QMessageBox::Question);
    int r=myBox->exec();
    switch (r) {
    case QMessageBox::Save :
        QApplication::exit();
        break;
    }

}
