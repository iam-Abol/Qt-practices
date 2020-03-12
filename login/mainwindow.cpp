#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->loginButton,SIGNAL(clicked()),this,SLOT(login()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::login(){
    QString name;
    name=ui->Name->text();
   QString pasword;
   pasword=ui->password->text();
   QString allInfo="name : "+name+"\n"+"password : "+pasword;

   ui->label->setText(allInfo);
}
