int mL1= 8; // initialize digital pin 8 as left motor
int mL2= 9; // initialize digital pin 9 as left motor
int mR1= 10; // initialize digital pin 10 as right motor
int mR2= 11; //initialize digital pin 11 as right motor
void setup() {
// put your setup code here, to run once:
pinMode(mL1,OUTPUT);
pinMode(mL2,OUTPUT); // Set the input and output values
pinMode(mR1,OUTPUT);
pinMode(mR2,OUTPUT);
}
void loop()
{
 forward(); // calling the forward function
 delay(1000); // wait for 1 sec
 stop_now(); //calling the stop_now function
 delay(1000); // wait for 1 sec
 backward(); // calling the backward function
 delay(1000); // wait for 1sec
 stop_now(); //calling the stop_now function
 delay(1000); // wait for 1 sec
 right(); // calling the right function
 delay(1000); // wait for 1 sec
 stop_now(); //calling the stop_now function
 delay(1000); // wait for 1 sec
left(); // calling the left function
delay(1000); // wait for 1 sec
stop_now(); //calling the stop_now function
delay(1000); // wait for 1sec
}
void forward() //To move forward
{
digitalWrite(mL1,HIGH);
digitalWrite(mL2,LOW);
digitalWrite(mR1,HIGH);
digitalWrite(mR2,LOW);
}
void backward() // To move Backward
{
digitalWrite(mL1,LOW);
digitalWrite(mL2,HIGH);
digitalWrite(mR1,LOW);
digitalWrite(mR2,HIGH);
}
void right() // To move Right
{
digitalWrite(mL1,HIGH);
digitalWrite(mL2,LOW);
digitalWrite(mR1,LOW);
digitalWrite(mR2,HIGH);}


void left() { // To move left
digitalWrite(mL1,LOW);
digitalWrite(mL2,HIGH);
digitalWrite(mR1,HIGH);
digitalWrite(mR2,LOW); }
void stop_now() //To stop
{
digitalWrite(mL1,LOW);
digitalWrite(mL2,LOW);
digitalWrite(mR1,LOW);
digitalWrite(mR2,LOW);
}
