#include <Stepper.h>
 
const int stepsPerRevolution = 20; 
 
// Connection pins:
Stepper myStepperY(stepsPerRevolution, 2,3,4,5);
 
void setup() {
 // Set speed:
 myStepperY.setSpeed(1000);
 // max 250 steps for dvd/cd stepper motor
 myStepperY.step(500);
 delay(50);
 
}
 
void loop() {
 
}
