#define foto 0
#define led 7
#include <Stepper.h>

const int stepsPerRevolution = 100;

Stepper myStepper(stepsPerRevolution, 8,9,10,11);

void setup()
{
 myStepper.setSpeed(30);
 Serial.begin(9600);
 pinMode(led, OUTPUT);
 
}

void loop()
{ 

 
int val = (analogRead(foto));
Serial.println(val);
if(val > 50){
  myStepper.step(100);
  }else{
    myStepper.step(-100);
    }
val = constrain (val, 10, 100);
int Level = map (val ,100 ,10, 0 , 255);
analogWrite (led, Level);
delay(50);


}
