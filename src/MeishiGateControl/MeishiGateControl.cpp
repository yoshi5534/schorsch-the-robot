#include "MeishiGateControl.h"
#include <stdexcept>
#include <sstream>
#include "../RobotLib/HelperMethods.h"

MeishiGateControl::MeishiGateControl(std::string deviceName) :
  _port(deviceName.c_str())
{
    this->_deviceName = deviceName;
    openPort();
    this->robot = new Robot("/dev/ttyS0", 750000);
    this->robot->getPort()->setLiveCommandMode(false);
    _running =  false;
    
    
    positions.reserve(30);
    positions[EndOfGoHome]	 	= Where(+425.61,+25.53,+157.87,+167.33,+160.00);       

    positions[BeOffended]	 	= Where(275.0,0,110,32.58,180.0);
    positions[BeOffended1]	 	= Where(200.0,50,150,37.58,190.0);   
    positions[BeOffended2]	 	= Where(300.0,50,50,32.58,180.0); 
    positions[DoTaunting]	 	= Where(275.0,0,110,32.58,180.0);
    positions[EndOfBeOffended]	 	= Where(275.0,0,110,32.58,180.0);
    positions[EndOfTaunting]	 	= Where(275.0,0,110,32.58,180.0);
    positions[EndOfMeishiDiscard]	= Where(454.64,-252.58,-243.06,29.05,176.84);	
    
    positions[GotoMeishi1Drop]	 	= Where(-27.51,226.56,-173.15,-101.28,190.66);   
    positions[GotoMeishiDiscard]	= Where(454.64,-252.58,-243.06,29.05,176.84);
    
    positions[GotoMeishi1Grip]	 	= Where(911.65,-110.82,390.72,9.06,87.26);  
    positions[GotoMeishi1Safety] 	= Where(819.71,-122.51,390.72,10.71,87.26);  
    positions[GotoMeishi2Grip]		= Where(906.68,12.87,390.72,0.95,87.26);
    positions[GotoMeishi2Safety]	= Where(823.27,12.87,390.72,0.86,87.26);
    positions[GotoMeishi3Grip]		= Where(906.78,138.39,390.72,-7.29,87.26);
    positions[GotoMeishi3Safety]	= Where(808.42,138.39,390.72,-8.38,87.26);
    positions[GotoMeishi4Grip]		= Where(899.52,259.56,390.72,-15.06,87.26);
    positions[GotoMeishi4Safety]	= Where(778.24,267.85,390.72,-18.10,87.26);	
    
    
    MeshiSteps meshiSteps1;
    meshiSteps1.gotoMeishi = 8;
    meshiSteps1.gripMeishi = 9;
    meshiSteps1.backToMeishi = 10;
    meshiSteps1.dropMeishi = 11;
    _meshiGrepProgramms["1"] = meshiSteps1;
    
    MeshiSteps meshiSteps2;
    meshiSteps2.gotoMeishi = 13;
    meshiSteps2.gripMeishi = 14;
    meshiSteps2.backToMeishi = 15;
    meshiSteps2.dropMeishi = 16;
    _meshiGrepProgramms["2"] = meshiSteps2;
    
    MeshiSteps meshiSteps3;
    meshiSteps3.gotoMeishi = 8;
    meshiSteps3.gripMeishi = 9;
    meshiSteps3.backToMeishi = 10;
    meshiSteps3.dropMeishi = 11;
    _meshiGrepProgramms["3"] = meshiSteps3;
    
    MeshiSteps meshiSteps4;
    meshiSteps4.gotoMeishi = 8;
    meshiSteps4.gripMeishi = 9;
    meshiSteps4.backToMeishi = 10;
    meshiSteps4.dropMeishi = 11;
    _meshiGrepProgramms["4"] = meshiSteps4;    
}

MeishiGateControl::~MeishiGateControl()
{
  deletePort();
}

void MeishiGateControl::deletePort()
{
    if( _port.IsOpen() )
    {
	_port.Close();
    }
}

void MeishiGateControl::openPort()
{    
    _port.Open();
    _port.SetBaudRate( SerialPort::BAUD_9600);
    _port.SetParity(SerialPort::PARITY_NONE);
    _port.SetCharSize(SerialPort::CHAR_SIZE_8);
    _port.SetNumOfStopBits(SerialPort::STOP_BITS_1);
    _port.SetFlowControl(SerialPort::FLOW_CONTROL_NONE);
    
    if(_port.IsOpen())
    {
      return;
    }    
    
    std::string errorMessage("RobotPort::openPort unable to open device ");
    errorMessage += _deviceName;
    throw std::invalid_argument( errorMessage );

    return;
}

std::string MeishiGateControl::readLine()
{ 
   std::string resultString = "";
   while(true)
   {
     if(_port.IsDataAvailable() )
     {
       char receivedChar = _port.ReadByte();
       if(receivedChar == '\n' && resultString.length() > 0)
       {
	 return resultString;
       }
       else
       {
	resultString += receivedChar;
       }
     }     
   }
}

void MeishiGateControl::send( std::string data)
{
  data += "\n";
  _port.Write(data);
}

bool MeishiGateControl::checkGate(std::string gateName)
{
    this->send(gateName);
    
    if(this->readLine().compare("active") == 0)
    {
	return true;
    }
    else
    {
      return false;
    }    
}

void MeishiGateControl::run()
{
  _running = true;
  while(_running)
  {
    for(int gateName = 1; gateName < 5; gateName++)
    {
      if(checkAndGrabMeishi(dataToString<int>(gateName)))
      {
	//robot->getPort()->setLiveCommandMode(true);
	//robot->grip.open();
	//robot->getPort()->setLiveCommandMode(false);
	
	switch(gateName)
	{
	  case 1:
 	    discardMeishiInDisgust();
	    break;
	  case 2:
// 	    doTaunting();
	    break;
	  case 3:
 	    dropMeishiInContainer();
	    break;
	  default:
// 	    giveBackMeishi();
	    break;
	}
      }
    }
  }  
}

void MeishiGateControl::discardMeishiInDisgust()
{
    if (_running)
    {
	robot->getPort()->executeProgram(12);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfMeishiDiscard], 20, 1.0);
    }
}

void MeishiGateControl::dropMeishiInContainer()
{
    if (_running)
    {
	robot->getPort()->executeProgram(11);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfBeOffended], 20, 1.0);
    }
}

void MeishiGateControl::giveBackMeishi()
{
  
}

bool MeishiGateControl::checkAndGrabMeishi(std::string gateName)
{
    if(this->checkGate(gateName))
    {
	if(!this->checkGate(gateName))
	{
	    beOffended();
	    return false;
	}
	
	robot->getPort()->executeProgram(_meshiGrepProgramms[gateName].gotoMeishi); // gotoMeishi1	
	robot->waitUntilRobotIsAtTargetPosition( positions[GotoMeishi1Safety], 2, 1.0);
	if(!this->checkGate(gateName))
	{
	    beOffended();
	    return false;		  
	}
	
	robot->getPort()->executeProgram(_meshiGrepProgramms[gateName].gripMeishi); //gripMeishi1
	if(!this->checkGate(gateName))
	{
	    robot->waitUntilRobotIsAtTargetPosition( positions[GotoMeishi1Grip], 2, 1.0);
	    robot->getPort()->setLiveCommandMode(true);
	    this->robot->grip.open();	
	    this->robot->wait(1000);
	    if (this->checkGate(gateName))
	    {
	      	this->robot->grip.close();
	    }
	    robot->getPort()->setLiveCommandMode(false);
	    
	    if(!this->checkGate(gateName))    
	    {
	      beOffended();
	      return false;	
	    }
	}
		
	robot->getPort()->executeProgram(_meshiGrepProgramms[gateName].backToMeishi);	//backToMeishi1
	robot->waitUntilRobotIsAtTargetPosition( positions[GotoMeishi1Safety], 2, 1.0);
	doTaunting();
	return true;
    }
    return false;
}

void MeishiGateControl::beOffended()   
{
    if (_running)
    {
	robot->getPort()->executeProgram(6);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfBeOffended], 20, 1.0);
    } 
}

void MeishiGateControl::doTaunting()
{
    if (_running)
    {
	robot->getPort()->executeProgram(7);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfTaunting], 20, 1.0);
    }  
}

void MeishiGateControl::gotoMeishi(std::string gateName)
{
    if (_running)
    {
	robot->getPort()->executeProgram(8);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfGotoMeishi], 20, 1.0);
    } 
}

void MeishiGateControl::uploadProgram()
{
      //go home
    {
 	this->robot->speed(20);
	this->robot->moveLinearTo(positions[EndOfGoHome]);
        this->robot->getPort()->sendQuedCommands(5);
    }

    
    // beOffended
    {
 	this->robot->speed(20);
	this->robot->moveLinearTo(positions[BeOffended]);
	this->robot->moveLinearTo(positions[BeOffended1]);
	this->robot->moveLinearTo(positions[BeOffended]);
	this->robot->moveLinearTo(positions[BeOffended2]);
	this->robot->moveLinearTo(positions[BeOffended]);
	this->robot->moveLinearTo(positions[BeOffended1]);
	this->robot->moveLinearTo(positions[EndOfBeOffended]);
        this->robot->getPort()->sendQuedCommands(6);
    } 
    
    // doTaunting
    {
 	this->robot->speed(20);
	this->robot->moveLinearTo(positions[DoTaunting]); 
	this->robot->moveLinearTo(positions[EndOfTaunting]); 
        this->robot->getPort()->sendQuedCommands(7);
    }    
    
    //gotoMeishi1
    {
      	this->robot->speed(20);
	this->robot->grip.open();
	this->robot->moveLinearTo(positions[GotoMeishi1Safety]); 	
        this->robot->getPort()->sendQuedCommands(8);
    } 
    
    //gripMeishi1
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi1Grip]);	
	this->robot->grip.close();
        this->robot->getPort()->sendQuedCommands(9);
    }   
    
    //backToMeishi1
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi1Safety]);	
        this->robot->getPort()->sendQuedCommands(10);
    } 
    
    //dropMeishi1
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi1Drop]);	
	this->robot->grip.open();
        this->robot->getPort()->sendQuedCommands(11);
    } 
    
    //dropMeishiInDisgust
    {
	this->robot->speed(20);
	this->robot->moveLinearTo(positions[GotoMeishiDiscard]);
	this->robot->grip.open();
	this->robot->getPort()->sendQuedCommands(12);
    }
    
    //gotoMeishi2
    {
      	this->robot->speed(20);
	this->robot->grip.open();
	this->robot->moveLinearTo(positions[GotoMeishi2Safety]); 	
        this->robot->getPort()->sendQuedCommands(13);
    } 
    
    //gripMeishi2
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi2Grip]);	
	this->robot->grip.close();
        this->robot->getPort()->sendQuedCommands(14);
    }   
    
    //backToMeishi2
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi2Safety]);	
        this->robot->getPort()->sendQuedCommands(15);
    } 
    /*
    //dropMeishi2
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi1Drop]);	
	this->robot->grip.open();
        this->robot->getPort()->sendQuedCommands(16);
    } */


    //giveBackMeishi

}

