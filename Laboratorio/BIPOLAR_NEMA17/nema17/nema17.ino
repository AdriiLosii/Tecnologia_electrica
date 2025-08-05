const int stepPin = 4; 
const int dirPin = 3; 
const int enPin = 2; 

void setup() { // Sets the two pins as Outputs 
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT); 
  digitalWrite(enPin,LOW); 
} 

void loop() { 
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction 
  for(int x = 0; x < 200; x++) { 
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(2000); 
  } 
  //delay(1000); // One second delay
}
