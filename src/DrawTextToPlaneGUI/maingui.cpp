#include "maingui.h"
#include "ui_maingui.h"

mainGUI::mainGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainGUI)
{
    ui->setupUi(this);
    ui->leBaseVectorX->setValidator(new QDoubleValidator(this));
    ui->leBaseVectorY->setValidator(new QDoubleValidator(this));
    ui->leBaseVectorZ->setValidator(new QDoubleValidator(this));
    ui->leXVectorX->setValidator(new QDoubleValidator(this));
    ui->leXVectorY->setValidator(new QDoubleValidator(this));
    ui->leXVectorZ->setValidator(new QDoubleValidator(this));
    ui->leYVectorX->setValidator(new QDoubleValidator(this));
    ui->leYVectorY->setValidator(new QDoubleValidator(this));
    ui->leYVectorZ->setValidator(new QDoubleValidator(this));
}

mainGUI::~mainGUI()
{
    delete ui;
}

void mainGUI::changeEvent(QEvent *e)
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
