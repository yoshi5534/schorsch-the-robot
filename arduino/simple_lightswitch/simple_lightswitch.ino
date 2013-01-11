/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT); 
  pinMode(2 , INPUT );
  pinMode(4 , INPUT );
  
}

void loop() {
  boolean isPin2On = digitalRead(2) == HIGH;  
  boolean isPin4On = digitalRead(4) == HIGH;  
  
  if(isPin2On && isPin4On)
  {
   digitalWrite(11, HIGH); 
   digitalWrite(12, LOW); 
  }
  else
  {
    digitalWrite(12, HIGH); 
    digitalWrite(11, LOW); 
  }
  delay(200);
}
