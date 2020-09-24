 int vSpeed = 90; //you can control the motor speed by changing the value upto 255
int turn_speed = 90; //you can control the motor speed by changing the value upto 255

int turn_delay = 5;
const int motorA1 = 4; // set the left motor pins
const int motorA2 = 3;
const int motorB1 = 6; // set the right motor pins
const int motorB2 = 5;
const int motorAspeed = 9; // set the left motor speed
const int motorBspeed = 11; //set the right motor speed
const int left_sensor_pin =A0; //set the left sensor pin as A0
const int right_sensor_pin =A1; // set the right sensor pin A1
int left_sensor_state; //set the left sensor state
int right_sensor_state; // set the right sensor state
void setup() {
pinMode(motorA1, OUTPUT); // set the output pins
pinMode(motorA2, OUTPUT);
pinMode(motorB1, OUTPUT);
pinMode(motorB2, OUTPUT);
Serial.begin(9600); // begin the serial monitor
delay(3000);
 }


void loop() {
//read the sensor pin value and store it in left sensor state:
left_sensor_state = analogRead(left_sensor_pin);
//read the right sensor pin value and store it in right sensor state:
right_sensor_state = analogRead(right_sensor_pin);
Serial.print(left_sensor_state);
Serial.println(right_sensor_state);
//if the right sensor state is greater than 500 and left sensor is less than 500
if(right_sensor_state > 500 && left_sensor_state < 500)
{
//motor turning right");
digitalWrite (motorA1,LOW);
digitalWrite(motorA2,HIGH);
digitalWrite (motorB1,HIGH);
digitalWrite(motorB2,LOW);
analogWrite (motorAspeed, turn_speed);
analogWrite (motorBspeed, turn_speed);

}
if(right_sensor_state < 500 && left_sensor_state > 500)
{
//motor turning left


digitalWrite (motorA1,HIGH);
digitalWrite(motorA2,LOW);
digitalWrite (motorB1,LOW);
digitalWrite(motorB2,HIGH);
analogWrite (motorAspeed, turn_speed);
analogWrite (motorBspeed, turn_speed);
 }
if(right_sensor_state < 500 && left_sensor_state < 500)
{
//motor going forward
digitalWrite (motorA2,HIGH);
digitalWrite(motorA1,LOW);
digitalWrite (motorB2,HIGH);
digitalWrite(motorB1,LOW);
analogWrite (motorAspeed, vSpeed);
analogWrite (motorBspeed, vSpeed);
 }
if(right_sensor_state > 500 && left_sensor_state > 500)
{
//motor stop
analogWrite (motorAspeed, 0);
analogWrite (motorBspeed, 0);}}
