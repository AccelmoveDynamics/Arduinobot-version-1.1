int trigPin = 8; // set the trig pin as 8
int echoPin =7; // set the echo pin as 7
int ledpin =10; // set the led pin as 10
long duration, cm;
void setup()
{
 Serial.begin(9600); // to open the serial monitor
 pinMode(trigPin, OUTPUT); // set the input and output
 pinMode(echoPin, INPUT);
 pinMode(ledpin,OUTPUT);
}
void loop()
{
 sensor();
 if(cm>=10) // cm is greater than or equal to 10
 {
 digitalWrite(ledpin,HIGH); // led will on
 }
else
 {
 digitalWrite(ledpin,LOW); // led will off
 }
 }
void sensor()
{
 digitalWrite(trigPin, LOW);
 delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin, HIGH); // pulseIn function will start the timer , when the trig signal produces the signal and store the value in duration
 cm = (duration*0.034)/2;
//the speed of the sound is0.034 microseconds. Dividing by 2 means the Sound will travels the object and come back
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(100);
}
