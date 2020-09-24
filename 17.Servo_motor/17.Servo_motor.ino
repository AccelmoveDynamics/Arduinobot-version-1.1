#include <Servo.h> // Include Library file
Servo myservo; // create servo object to control a servo

void setup()
{
myservo.attach(9); // attaches the servo on pin 9 to the servo object
}
void loop()
{
myservo.write(180); // Rotating Servo into 180 degree
}
