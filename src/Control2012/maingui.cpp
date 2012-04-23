#include <fstream>
#include <complex> 

#include <QFileDialog>
#include <QFileSystemModel>
#include <QMessageBox>
#include <QTimer>

#include "maingui.h"
#include "../../cmake/build/Control2012/ui_maingui.h"


mainGUI::mainGUI(com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> createdXComponentLoader, QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::mainGUI),
        automationThread(createdXComponentLoader)
{
    ui->setupUi(this);   
}

mainGUI::~mainGUI()
{
    delete ui;
}

void mainGUI::uploadProgram()
{
    automationThread.uploadProgram();
}

void mainGUI::startProgram()
{
    loadPresentation();
    automationThread.startPresentation();
    automationThread.start();
    ui->startProgram->setDisabled(true);
    ui->stopProgram->setDisabled(false);
}

void mainGUI::stopProgram()
{
    automationThread.stopProgram();
    ui->startProgram->setDisabled(false);
    ui->stopProgram->setDisabled(true);
}

void mainGUI::abortTransmission()
{
  automationThread.abortTransmission();
}

void mainGUI::selectPresentation()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.selectFile(this->ui->selectedPresentation->text());

    if (dialog.exec())
    {
        this->ui->selectedPresentation->setText(dialog.selectedFiles().first());
    }
}

void mainGUI::loadPresentation()
{
   automationThread.loadPresentation(this->ui->selectedPresentation->text().toStdString());
}

void mainGUI::startPresentation()
{
  automationThread.startPresentation();
}

void mainGUI::stopPresentation()
{
  automationThread.stopPresentation();
}

void mainGUI::nextSlide()
{
   automationThread.nextSlide();
}

void mainGUI::previousSlide()
{
   automationThread.previousSlide();
}
