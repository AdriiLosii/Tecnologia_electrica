#include <Stepper.h>
 
Stepper myStepper(200, 8, 9, 10, 11);
 
void setup() {
  myStepper.setSpeed(50);
}

void loop() {  
  myStepper.step(512);
  delay(1000); 
  myStepper.step(-512);
  delay(1000);
}
