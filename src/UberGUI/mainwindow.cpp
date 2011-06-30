#include <iostream>
#include <QKeyEvent>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFocusPolicy(Qt::StrongFocus);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::keyPressEvent ( QKeyEvent * event )
{
  std::cout << "Ein Event!" << std::endl;
  if(event->key() == Qt::Key_Left)
  {
    std::cout << "Left" << std::endl;
    //mRobot.sendCommandAndLog("DJ 5,5");
  }
}
