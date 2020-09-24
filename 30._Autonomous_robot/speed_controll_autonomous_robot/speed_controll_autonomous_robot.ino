#include <Servo.h>      // include library file of servo
#include<NewPing.h> // include library file of ultrasonic sensor
const int LeftMotorForward = 5;
const int LeftMotorBackward = 6; // Assign the values of motor
const int RightMotorForward = 3;
const int RightMotorBackward = 4;  
const int ena=11;
const int enb=12;
int v_speed=130; //you can control  the motor speed 
#define TRIGGER_PIN  7    // Assign the ultrasonic sensor  trigpin  
#define ECHO_PIN     8     // Assign the ultrasonic sensor echopin
#define MAX_DISTANCE 250 

Servo servo_motor;  
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

boolean goesForward = false;
 
int distance = 100;
 
void setup()
{
pinMode(RightMotorForward, OUTPUT);    // set the output pins
pinMode(LeftMotorForward, OUTPUT);
pinMode(LeftMotorBackward, OUTPUT);
pinMode(RightMotorBackward, OUTPUT);
pinMode(ena, OUTPUT);
pinMode(enb, OUTPUT);
servo_motor.attach(9);   // attach the servo motor to digital pin 9
servo_motor.write(115);    // rotate servo in 115 degree
delay(2000);              
distance = readPing();    
delay(100);              
distance = readPing();
delay(100);
distance = readPing();
delay(100);
distance = readPing();
delay(100);
}
void loop()
{  
int distanceRight = 0;
int distanceLeft = 0;
delay(50);
if (distance <= 20)
{
moveStop();
delay(300);
moveBackward();
delay(300);
moveStop();
delay(300);
distanceRight = lookRight();
delay(300);
distanceLeft = lookLeft();
delay(300);
if (distanceRight >= distanceLeft) // if right distance is greater than left distance
{
turnRight();   // calling right function
delay(300);
moveStop();  // calling stop function
}
else
{
turnLeft();   // calling left function
delay(300);
moveStop();  // calling stop function
}
}
else{
moveForward(); // calling forward function
}




distance = readPing(); 
}

int lookRight()   
{  
servo_motor.write(50);  // rotate the servo in 50 degree
delay(500);
int distance = readPing();
delay(100);
servo_motor.write(115);  // rotate the servo in 115 degree
return distance;
}
int lookLeft()    
{
servo_motor.write(180);
delay(500);
int distance = readPing();
delay(100);
servo_motor.write(115);
return distance;
}

int readPing()      
{
delay(100);            
int cm = sonar.ping_cm(); 
if (cm==0)
{
cm=250;
}
return cm;
}


void moveStop()    // to stop the movement 
{
digitalWrite(RightMotorForward, LOW);
digitalWrite(RightMotorBackward, LOW);
digitalWrite(LeftMotorForward, LOW);
digitalWrite(LeftMotorBackward, LOW);
}

void moveForward() // to move forward   
{
digitalWrite(RightMotorForward, HIGH);
digitalWrite(RightMotorBackward, LOW);
digitalWrite(LeftMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
analogWrite(ena,v_speed);
analogWrite(enb,v_speed);
}

void moveBackward()  // to move backward 
{
digitalWrite(RightMotorForward, LOW);
digitalWrite(RightMotorBackward, HIGH);
digitalWrite(LeftMotorForward, LOW);
digitalWrite(LeftMotorBackward, HIGH);
analogWrite(ena,v_speed);
analogWrite(enb,v_speed);
 }

 void turnRight()      // Turn Right Function for Motor Driver.
{
digitalWrite(RightMotorForward, HIGH);
digitalWrite(RightMotorBackward, LOW);
digitalWrite(LeftMotorForward, LOW);
digitalWrite(LeftMotorBackward, HIGH);
analogWrite(ena,v_speed);
analogWrite(enb,v_speed);
}


void turnLeft()       // Turn Left Function for Motor Driver.
{
digitalWrite(RightMotorForward,LOW);  
digitalWrite(RightMotorBackward, HIGH);
digitalWrite(LeftMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
analogWrite(ena,v_speed);
analogWrite(enb,v_speed);
}
