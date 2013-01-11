/**
 * Sketch for identity card detection which will be used
 * for schorsch-the-robot at controll 2012
 **/
class MeishiGate
{
  private:
    String _name;
    int _ledRedPin; 
    int _ledGreenPin;
    int _sensor1Pin;
    int _sensor2Pin;
    int _savedState;
    int _sensor1SavedState;
    int _sensor2SavedState;
    boolean _gateStateChanged;   
    boolean _initialiced;  
    
    int getCurrentState(int pin, int lastState)
    {
      int currentState = digitalRead(pin);
      if (lastState != currentState)
      {
        delay(200);
        currentState = digitalRead(pin);
      }      
      return currentState;
    }
    
    void updateLed()
    {
      if(_initialiced)
      {
        if( _savedState)
        {
          digitalWrite(_ledRedPin, LOW);
          digitalWrite(_ledGreenPin, HIGH);
        }
        else
        {
          digitalWrite(_ledRedPin, HIGH);
          digitalWrite(_ledGreenPin, LOW);
        }
      }
    }

  public:
    MeishiGate
    (  
      String name, 
      int ledRedPin,
      int ledGreenPin,
      int sensor1Pin,
      int sensor2Pin      
    )
    {
      _name = name;
      _ledGreenPin = ledGreenPin;
      _ledRedPin = ledRedPin;
      _sensor1Pin = sensor1Pin;
      _sensor2Pin = sensor2Pin;
      _savedState = LOW;
      _sensor1SavedState = LOW,
      _sensor1SavedState = LOW,
      _gateStateChanged = true; 
      _initialiced = false;
    }
    
    void init()
    {
      pinMode(_ledGreenPin, OUTPUT);
      pinMode(_ledRedPin  , OUTPUT);
      pinMode(_sensor1Pin , INPUT );
      pinMode(_sensor2Pin , INPUT );
      _initialiced = true;
    }
    
    void updateState()
    {
      if( _initialiced )
      {
        _sensor1SavedState = getCurrentState(_sensor1Pin, _sensor1SavedState);
        _sensor2SavedState = getCurrentState(_sensor2Pin, _sensor2SavedState);
        
        _savedState = _sensor1SavedState && _sensor2SavedState;
      }
    }
    
    void update(String input)
    {
      updateState();
      updateLed();
      if( input == _name)
      {
        if( _savedState)
        {
          Serial.print("active\n");
        }
        else
        {
          Serial.print("idle\n");
        }
      }
    }    
};

//define pins

MeishiGate gate1("1", 11, 12, 2, 4); 
//MeishiGate gate2("2", 0, 5, 6, 7); 
//MeishiGate gate3("3", 0, 8, 9,10); 
//MeishiGate gate4("4", 0,11,12,13); 

void setup() 
{ 
  Serial.begin(9600);
  gate1.init();
//  gate2.init();    
//  gate3.init(); 
//  gate4.init(); 
}

void loop() 
{  
  char inputChar = ' ';
  if (Serial.available() > 0) 
  {
    int input = Serial.read();
    inputChar = input;
  }  
  gate1.update(String(inputChar));
  //gate2.update(String(inputChar));
  //gate3.update(String(inputChar));
  //gate4.update(String(inputChar));
  
}


