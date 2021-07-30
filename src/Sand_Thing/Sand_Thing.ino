//2030 steps in one length
//
#include <Stepper.h>
 
// steps value is 360 / degree angle of motor
#define STEPS 200
 
// create a stepper object on pins 4, 5, 6 and 7
Stepper stepper1(STEPS, 5, 4, 3, 2);
Stepper stepper2(STEPS, 12, 11, 10, 9);
  
void setup()
{
}

void loop()
{
    stepper1.setSpeed(300);
    stepper2.setSpeed(20);
    stepper1.step(1000);
    stepper2.step(100);
    delay(500);
    //stepper1.setSpeed(300);
    stepper2.setSpeed(50);
    stepper1.step(-1000);
    stepper2.step(-100);
    delay(500);
}
