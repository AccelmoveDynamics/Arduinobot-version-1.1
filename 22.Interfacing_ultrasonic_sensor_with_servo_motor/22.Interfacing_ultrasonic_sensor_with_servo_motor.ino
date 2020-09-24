int trigPin = 2; // set the trig pin
int echoPin = 3; // set the echo pin
long duration,cm;
#include<Servo.h>
 Servo myservo; // create servo object to control a servo
void setup()
{
 Serial.begin (9600); // to begin the serial monitor
pinMode(trigPin, OUTPUT); // set the input and output value
pinMode(echoPin, INPUT);
myservo.attach(9); // attach the servo into digital pin 9
myservo.write(0); // making the initial condition of servo 0
}
void loop()
{
sensor();
myservo.write(0);
if(cm >= 10) //cm is greater than or equal to 10
{
myservo.write(90); // servo rotates 90 degree
}
else
{
myservo.write(0); // Servo in 0 degree
}
}
void sensor()
{
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
 cm = (duration*0.034)/2;
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(400);
}
