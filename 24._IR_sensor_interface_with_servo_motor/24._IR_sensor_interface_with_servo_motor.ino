int IRSensor = 2; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13
#include<Servo.h>
Servo myservo;
void setup()
{
myservo.attach(9);
pinMode (IRSensor, INPUT); // sensor pin INPUT
pinMode (LED, OUTPUT); // Led pin OUTPUT
myservo.write(0);
}
void loop()
{
int statusSensor = digitalRead (IRSensor);
if (statusSensor == 1)
{
digitalWrite(LED, HIGH); // LED LOW
myservo.write(90);
}
else
{
digitalWrite(LED,LOW) ; // LED High
myservo.write(0);
}
}
