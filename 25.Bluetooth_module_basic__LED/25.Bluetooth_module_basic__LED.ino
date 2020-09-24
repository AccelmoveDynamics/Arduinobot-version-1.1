const int led =13; // initialize the digital pin 13 as led pin
char c;
int state_led=0;
void setup()
{
Serial.begin(9600); // to begin the serial monitor
pinMode(led, OUTPUT); // set the output value
}
void loop() {
if(Serial.available()>0) // data in the serial monitor is greater than 0
{
c = Serial.read(); // read the data in serial monitor and store in c
Serial.println(c); // print the c value
delay(15);
}
if(c == 'a') // if the available value is a(1)
{
 state_led=1;
}
if(c=='b')
{
state_led=0;

}
if(state_led==1)
{
 digitalWrite(led,HIGH);
 }
 else
 {
 digitalWrite(led,LOW);
 }
}
