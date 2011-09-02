#ifndef GRIP_H
#define GRIP_H

class Grip
{
  private:
    std::string _gripNumberAsString;
    RobotPort* _robotPort;

    void checkRange(float64 value)
    {

    }

  public:

    Grip( RobotPort* robotPort, uint8 gripNumber )
    {
      if( robotPort == NULL )
      {
        throw std::invalid_argument( "Grip::Grip robot is NULL" );
      }

      _robotPort = robotPort;
      _gripNumberAsString = dataToString(gripNumber);
    }

    void open()
    {
        _robotPort->sendCommandAndLog("GO " + _gripNumberAsString );
    }

    void close()
    {
        _robotPort->sendCommandAndLog("GC " + _gripNumberAsString );
    }

    void flowOpen()
    {
        this->close();;
    }

    void flowClose()
    {
        this->open();
    }
};
#endif // GRIP_H
