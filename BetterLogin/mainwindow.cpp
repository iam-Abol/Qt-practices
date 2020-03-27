#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include "qstring.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginBtn_clicked()
{

    Form *loginform=new Form();
    loginform->show();




}
