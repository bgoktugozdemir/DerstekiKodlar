#include "mainwindow.h"
#include "ui_mainwindow.h"

double sayi1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn0,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn1,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn2,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn3,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn4,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn5,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn6,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn7,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn8,SIGNAL(released()),this,SLOT(sayiGoster()));
    connect(ui->btn9,SIGNAL(released()),this,SLOT(sayiGoster()));

    connect(ui->btnTOPLA,SIGNAL(released()),this,SLOT(operatorProcess()));
    connect(ui->btnCIKAR,SIGNAL(released()),this,SLOT(operatorProcess()));
    connect(ui->btnCARP,SIGNAL(released()),this,SLOT(operatorProcess()));
    connect(ui->btnBOL,SIGNAL(released()),this,SLOT(operatorProcess()));

    ui->btnTOPLA->setCheckable(true);
    ui->btnCIKAR->setCheckable(true);
    ui->btnCARP->setCheckable(true);
    ui->btnBOL->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sayiGoster()
{
    QPushButton *btn = (QPushButton*)sender();
    ui->label->setText(ui->label->text()+btn->text());
}

void MainWindow::operatorProcess()
{
    QPushButton *btn = (QPushButton*)sender();
    btn->setChecked(true);
    sayi1 = ui->label->text().toDouble();
    //ui->label->setText("");
    ui->label->clear();
}

void MainWindow::on_btnC_released()
{
    ui->label->setText("");
}

void MainWindow::on_btnNEGATIF_released()
{
    double sayi = ui->label->text().toDouble();
    sayi=sayi*(-1);
    QString ekran = QString::number(sayi,'g',12);
    ui->label->setText(ekran);
}



void MainWindow::on_btnYUZDE_released()
{
    double sayi = ui->label->text().toDouble();
    sayi=sayi*(0.01);
    QString ekran = QString::number(sayi,'g',12);
    ui->label->setText(ekran);
}

void MainWindow::on_btnESIT_released()
{
    double sayi2;
    sayi2 = ui->label->text().toDouble();
    double sonuc;
    QString ekran;
    if(ui->btnTOPLA->isChecked())
    {
        sonuc = sayi1+sayi2;
        ui->btnTOPLA->setChecked(false);
    }
    else if(ui->btnCIKAR->isChecked())
    {
        sonuc = sayi1-sayi2;
        ui->btnCIKAR->setChecked(false);
    }
    else if(ui->btnCARP->isChecked())
    {
        sonuc = sayi1*sayi2;
        ui->btnCARP->setChecked(false);
    }
    else if(ui->btnBOL->isChecked())
    {
        sonuc = sayi1/sayi2;
        ui->btnBOL->setChecked(false);
    }
    ekran = QString::number(sonuc,'g',12);
    ui->label->setText(ekran);
}
