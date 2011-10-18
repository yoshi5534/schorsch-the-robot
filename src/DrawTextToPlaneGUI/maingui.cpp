#include <fstream>

#include "maingui.h"
#include "ui_maingui.h"

#include "../RobotLib/Matrix.h"
#include "../RobotLib/Vector.h"
#include "../RobotLib/Text.h"
#include "../RobotLib/PlaneToCoordinateSystem.h"
#include "../RobotLib/Where.h"


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
    ui->leAngleMarkerA->setValidator(new QDoubleValidator(this));
    ui->leAngleMarkerB->setValidator(new QDoubleValidator(this));
    ui->leAngleEraserA->setValidator(new QDoubleValidator(this));
    ui->leAngleEraserB->setValidator(new QDoubleValidator(this));

    this->robot = new Robot("/dev/ttyS0", 750000);
    this->robot->getPort()->setLiveCommandMode(false);
}

mainGUI::~mainGUI()
{
    if (this->robot != NULL)
    {
        delete this->robot;
        this->robot = NULL;
    }

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

void mainGUI::defineYVector()
{
    Where where(robot);
    ui->leYVectorX->setText(QString::number(where.x));
    ui->leYVectorY->setText(QString::number(where.y));
    ui->leYVectorZ->setText(QString::number(where.z));
}

void mainGUI::defineXVector()
{
    Where where(robot);
    ui->leXVectorX->setText(QString::number(where.x));
    ui->leXVectorY->setText(QString::number(where.y));
    ui->leXVectorZ->setText(QString::number(where.z));
}

void mainGUI::defineBaseVector()
{
    Where where(robot);
    ui->leBaseVectorX->setText(QString::number(where.x));
    ui->leBaseVectorY->setText(QString::number(where.y));
    ui->leBaseVectorZ->setText(QString::number(where.z));
}

void mainGUI::defineMarker()
{
    Where where(robot);
    ui->leAngleMarkerA->setText(QString::number(where.a));
    ui->leAngleMarkerB->setText(QString::number(where.b));
}


void mainGUI::defineEraser()
{
    Where where(robot);
    ui->leAngleEraserA->setText(QString::number(where.a));
    ui->leAngleEraserB->setText(QString::number(where.b));
}

void mainGUI::writeText()
{
    Vector yPoint	( ui->leYVectorX->text().toDouble(), 	ui->leYVectorY->text().toDouble(), 	ui->leYVectorZ->text().toDouble());
    Vector basePoint	( ui->leBaseVectorX->text().toDouble(), ui->leBaseVectorY->text().toDouble(), 	ui->leBaseVectorZ->text().toDouble());
    Vector xPoint	( ui->leXVectorX->text().toDouble(), 	ui->leXVectorY->text().toDouble(), 	ui->leXVectorZ->text().toDouble());

    Matrix coordinateSystem = PlaneToCoodinateSystem::toCoordinateSystem(xPoint-basePoint, yPoint-basePoint, ui->checkBoxInvertX->isChecked(), ui->checkBoxInvertY->isChecked(), ui->checkBoxInvertZ->isChecked());
    Vector target = coordinateSystem * Vector(1,0,0);

    Text::writeTextWithWordWrap(
        this->robot,
        std::string(ui->txtEditTextToWrite->toPlainText().toStdString()),
        coordinateSystem,
        yPoint,
        ui->leAngleMarkerA->text().toDouble(),
        ui->leAngleMarkerB->text().toDouble(),
        20.0,
        25
    );

    this->robot->goHome();
    this->robot->getPort()->executeQuedCommands();
}

void mainGUI::moveToBaseVector()
{
    //this->robot->goHome();
    this->robot->moveLinearTo(Vector(	ui->leBaseVectorX->text().toDouble(),
                                      ui->leBaseVectorY->text().toDouble(),
                                      ui->leBaseVectorZ->text().toDouble()),
                              ui->leAngleMarkerA->text().toDouble(),
                              ui->leAngleMarkerB->text().toDouble());
    this->robot->getPort()->executeQuedCommands();
}

void mainGUI::moveToXVector()
{
    //this->robot->goHome();
    this->robot->moveLinearTo(Vector(ui->leXVectorX->text().toDouble(),
                                     ui->leXVectorY->text().toDouble(),
                                     ui->leXVectorZ->text().toDouble()),
                              ui->leAngleMarkerA->text().toDouble(),
                              ui->leAngleMarkerB->text().toDouble());
    this->robot->getPort()->executeQuedCommands();
}


void mainGUI::moveToYVector()
{
    //this->robot->goHome();
    this->robot->moveLinearTo(Vector( ui->leYVectorX->text().toDouble(),
                                      ui->leYVectorY->text().toDouble(),
                                      ui->leYVectorZ->text().toDouble()),
                              ui->leAngleMarkerA->text().toDouble(),
                              ui->leAngleMarkerB->text().toDouble());
    this->robot->getPort()->executeQuedCommands();

}


void mainGUI::saveConfiguration()
{
    std::ofstream stream;
    stream.open("DrawTextToPlaneGUI.config");

    if ( stream )
    {
        stream  	      	 << ui->leYVectorX->text().toDouble()
        << std::endl << ui->leYVectorY->text().toDouble()
        << std::endl << ui->leYVectorZ->text().toDouble()
        << std::endl << ui->leBaseVectorX->text().toDouble()
        << std::endl << ui->leBaseVectorY->text().toDouble()
        << std::endl << ui->leBaseVectorZ->text().toDouble()
        << std::endl << ui->leXVectorX->text().toDouble()
        << std::endl << ui->leXVectorY->text().toDouble()
        << std::endl << ui->leXVectorZ->text().toDouble()
        << std::endl << ui->leAngleMarkerA->text().toDouble()
        << std::endl << ui->leAngleMarkerB->text().toDouble()
        << std::endl << ui->leAngleEraserA->text().toDouble()
        << std::endl << ui->leAngleEraserB->text().toDouble()
        << std::endl << ui->speedSpinBox->text().toStdString()
        << std::endl << ui->checkBoxInvertX->isChecked()
        << std::endl << ui->checkBoxInvertY->isChecked()
        << std::endl << ui->checkBoxInvertZ->isChecked();
    }

    stream.close();
}

void mainGUI::loadConfiguration()
{
    std::ifstream stream;
    stream.open("DrawTextToPlaneGUI.config");
    std::string value;

    stream >> value;
    ui->leYVectorX->setText(QString::fromStdString(value));
    stream >> value;
    ui->leYVectorY->setText(QString::fromStdString(value));
    stream >> value;
    ui->leYVectorZ->setText(QString::fromStdString(value));
    stream >> value;
    ui->leBaseVectorX->setText(QString::fromStdString(value));
    stream >> value;
    ui->leBaseVectorY->setText(QString::fromStdString(value));
    stream >> value;
    ui->leBaseVectorZ->setText(QString::fromStdString(value));
    stream >> value;
    ui->leXVectorX->setText(QString::fromStdString(value));
    stream >> value;
    ui->leXVectorY->setText(QString::fromStdString(value));
    stream >> value;
    ui->leXVectorZ->setText(QString::fromStdString(value));
    stream >> value;
    ui->leAngleMarkerA->setText(QString::fromStdString(value));
    stream >> value;
    ui->leAngleMarkerB->setText(QString::fromStdString(value));
    stream >> value;
    ui->leAngleEraserA->setText(QString::fromStdString(value));
    stream >> value;
    ui->leAngleEraserB->setText(QString::fromStdString(value));
    stream >> value;
    ui->speedSpinBox->setValue(stringToData<int32>(value));
    stream >> value;
    if (value == "1")
    {
        ui->checkBoxInvertX->setChecked( true );
    }
    else
    {
        ui->checkBoxInvertX->setChecked( false );
    }
    stream >> value;
    if (value == "1")
    {
        ui->checkBoxInvertY->setChecked( true );
    }
    else
    {
        ui->checkBoxInvertY->setChecked( false );
    }
    stream >> value;
    if (value == "1")
    {
        ui->checkBoxInvertZ->setChecked( true );
    }
    else
    {
        ui->checkBoxInvertZ->setChecked( false );
    }
}

void mainGUI::cleanBoard()
{
    Vector yPoint	( ui->leYVectorX   ->text().toDouble(), ui->leYVectorY   ->text().toDouble(), 	ui->leYVectorZ   ->text().toDouble());
    Vector basePoint	( ui->leBaseVectorX->text().toDouble(), ui->leBaseVectorY->text().toDouble(), 	ui->leBaseVectorZ->text().toDouble());
    Vector xPoint	( ui->leXVectorX   ->text().toDouble(), ui->leXVectorY   ->text().toDouble(), 	ui->leXVectorZ   ->text().toDouble());

    Matrix coordinateSystem = PlaneToCoodinateSystem::toCoordinateSystem(xPoint-basePoint, yPoint-basePoint, ui->checkBoxInvertX->isChecked(), ui->checkBoxInvertY->isChecked(), ui->checkBoxInvertZ->isChecked());
    Vector target = coordinateSystem * Vector(1,0,0);

    QStringList linesOfText = ui->txtEditTextToWrite->toPlainText().split("\n");
    uint64 longestLine = 0;
    QString currentLine;
    foreach( currentLine, linesOfText)
    {
        if ( currentLine.size() > longestLine )
        {
            longestLine = currentLine.size();
        }
    }

    Text::cleanBoard(
        this->robot,
        coordinateSystem,
        yPoint,
        //ui->leAngleEraserA->text().toDouble(),
        //ui->leAngleEraserB->text().toDouble(),
        20.0,
        60.0,
        60.0,
        60.0,
        20.0,
        25,
        linesOfText.size(),
        longestLine + 2
    );

    this->robot->goHome();
    this->robot->getPort()->executeQuedCommands();
}

void mainGUI::resetRobot()
{
    this->robot->reset();
}

void mainGUI::abortTransmission()
{
    this->robot->getPort()->abortDataTransmission();
}

void mainGUI::goHome()
{
    this->robot->goHome();
    this->robot->getPort()->executeQuedCommands();
}

void mainGUI::speedChanged(int newSpeed)
{
    this->robot->speed(newSpeed);
}

void mainGUI::selectScheduleDirectory()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::Directory);
    dialog.setDirectory(this->ui->scheduleDirectoryLineEdit->text());

    if (dialog.exec())
    {
        this->ui->scheduleDirectoryLineEdit->setText(dialog.directory().path());
        scheduleDirectoryLineEditFinished();
    }
}

void mainGUI::scheduleDirectoryLineEditFinished()
{
    QFileSystemModel *model = new QFileSystemModel;
    model->setFilter(QDir::Files);
    model->setRootPath(this->ui->scheduleDirectoryLineEdit->text());
    QStringList filters;
    filters << "*.h";
    model->setNameFilters ( filters );
    model->setNameFilterDisables(false);

    this->ui->scheduleFileListView->setModel(model);
    this->ui->scheduleFileListView->setRootIndex(model->index(this->ui->scheduleDirectoryLineEdit->text()));
    
    
    
    int rowCount = model->rowCount();
    int columnCount = model->columnCount();
    
    //delete model; //according to the setModel documentation in QAbstractItemView 
    
}

void mainGUI::automaticStart()
{
 QFileSystemModel* model = dynamic_cast< QFileSystemModel* >(this->ui->scheduleFileListView->model());
    QModelIndex parentIndex = model->index(this->ui->scheduleDirectoryLineEdit->text());
    int rowCount = model->rowCount(parentIndex);
    for (int i=0; i<rowCount; i++)
    {
        QModelIndex modelIndex = model->index(i, 0, parentIndex);
        if ( modelIndex.isValid() )
        {
            this->ui->scheduleFileListView->selectionModel()->select( modelIndex, QItemSelectionModel::Select );
        }
        QFileInfo fileInfo = model->fileInfo(modelIndex);
        QString currentFilePath = fileInfo.absoluteFilePath();

        QString text = model->data(modelIndex, Qt::DisplayRole).toString();

        std::cout << currentFilePath.toStdString() << " : " << text.toStdString() << std::endl;
        //sleep( 2 );

        QFile file(currentFilePath);
        if (!file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this, "Log Reader", "Cannot read file %1:\n%2"
                                 ,currentFilePath
                                 ,file.errorString());
            break;
        }

        QTextStream in(&file);

        this->ui->automaticTextEdit->setPlainText(in.readAll());
        file.close();
        sleep(1);

    }
}

void mainGUI::automaticStop()
{
  
}

