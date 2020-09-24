int mL1=8; // assign the left motor pin
int mL2=9; // assign the left motor pin
int mR1=10; // assign the right motor pin
int mR2=11;// assign the right motor pin
char var;
void setup() {
Serial.begin(9600); // to begin the serial monitor
pinMode(mL1,OUTPUT); // assign the output values
pinMode(mL2,OUTPUT);
pinMode(mR1,OUTPUT);
pinMode(mR2,OUTPUT);
}
void loop() {
if(Serial.available()>0) // data available in serial monitor is greater than 0
var= Serial.read(); // read the data in the serial monitor and store in var
Serial.println(var); // print the value in var
if(var=='F') // if the val is F
{
 forward(); // calling forward function
 }
 else if(var=='B') // if it is B


 {
 backward(); // calling backward function
 }
 else if(var=='L') // if it is L
 {
 left(); // calling left function
 }
 else if(var=='R') // if it is R
 {
 right(); // calling Right function
 }
 else{
 movestop(); // calling stop function
}
 }
void movestop(){ // movestop function
digitalWrite(mR1,LOW);
digitalWrite(mR2,LOW);
digitalWrite(mL1,LOW);
digitalWrite(mL2,LOW);
 }
void forward() // forward function


{
digitalWrite(mR1,HIGH);
digitalWrite(mR2,LOW);
digitalWrite(mL1,HIGH);
digitalWrite(mL2,LOW);
}
void backward(){ // backward function
digitalWrite(mR1,LOW);
digitalWrite(mR2,HIGH);
digitalWrite(mL1,LOW);
digitalWrite(mL2,HIGH);
}
void left(){ // left function
digitalWrite(mR1,HIGH);
digitalWrite(mR2,LOW);
digitalWrite(mL1,LOW);
digitalWrite(mL2,HIGH);
}
void right(){ // right function
digitalWrite(mR1,LOW);
digitalWrite(mR2,HIGH);
digitalWrite(mL1,HIGH);
digitalWrite(mL2,LOW);}
