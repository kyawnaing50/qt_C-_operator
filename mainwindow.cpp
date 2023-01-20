#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnPlus_clicked()
{
    double a,b,c;
    a=ui->lineEdit_A->text().toDouble();
    b=ui->lineEdit_B->text().toDouble();
    c=a+b;
    ui->lineEdit_R->setText(QString::number(c));
}


void MainWindow::on_btnMinus_clicked()
{
    double a,b,c;
    a=ui->lineEdit_A->text().toDouble();
    b=ui->lineEdit_B->text().toDouble();
    c=a-b;
    ui->lineEdit_R->setText(QString::number(c));
}


void MainWindow::on_btnMult_clicked()
{
    double a,b,c;
    a=ui->lineEdit_A->text().toDouble();
    b=ui->lineEdit_B->text().toDouble();
    c=a*b;
    ui->lineEdit_R->setText(QString::number(c));
}


void MainWindow::on_btnDiv_clicked()
{
    double a,b,c;
    a=ui->lineEdit_A->text().toDouble();
    b=ui->lineEdit_B->text().toDouble();
    c=a/b;
    ui->lineEdit_R->setText(QString::number(c));
}


void MainWindow::on_btnClear_clicked()
{
    ui->lineEdit_A->setText(QString::number(0));
    ui->lineEdit_B->setText(QString::number(0));
    ui->lineEdit_R->setText(QString::number(0));
}

