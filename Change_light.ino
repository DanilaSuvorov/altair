#define foto 0
#define led 7

void setup()
{
 Serial.begin(9600);
 pinMode(led, OUTPUT);
 
}

void loop()
{ 

 
int val = (analogRead(foto));
Serial.println(val);
val = constrain (val, 10, 100);
int Level = map (val ,100 ,10, 0 , 255);
analogWrite (led, Level);
delay(50);


}
