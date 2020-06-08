#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPushButton>
#include <QObject>
#include <QDebug>
#include "Window1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setFixedSize(800,600);
    ui->setupUi(this);
    QPushButton* button1=new QPushButton("start",this);
    QPushButton* button2=new QPushButton("quit",this);
    button1->setFixedSize(150,100);
    button1->move(325,400);
    button2->setFixedSize(150,100);
    button2->move(325,250);
    connect(button2,SIGNAL(clicked()),this,SLOT(close()));//connect的四个参数，其中第三个因接收对象而略去
    connect(button1,SIGNAL(clicked()),this,SLOT(togame()));
    connect(&window1,SIGNAL(mysignal()),this,SLOT(tomain()));
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,800,600,QPixmap(":/Images/map1.jpg"));

}

void MainWindow::togame()
{
    this->hide();
    window1.show();
}

void MainWindow::tomain()
{
    this->show();
    window1.hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

