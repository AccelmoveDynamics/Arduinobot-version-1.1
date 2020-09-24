int led1 = 8;
int led2 = 9;
int led3 = 10;
void setup()
{ pinMode(led1, OUTPUT); // setup the three pin as output:
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
}
void loop() // put the main code here to run repeatedly
 {
 digitalWrite(led1, HIGH); // turn the LED on (HIGH is the voltage level)
 delay(100); // wait for 100ms
 digitalWrite(led1, LOW); // turn the LED off by making the voltage LOW
 delay(100); // wait for 100ms
 digitalWrite(led2, HIGH); // turn the LED on (HIGH is the voltage level)
 delay(100); // wait for 100ms
 digitalWrite(led2, LOW); // turn the LED off by making the voltage LOW
 delay(100); // wait for 100ms
 digitalWrite(led3, HIGH); // turn the LED on (HIGH is the voltage level)
 delay(100); // wait for 100ms
 digitalWrite(led3, LOW); // turn the LED off by making the voltage LOW
 delay(100); // wait for 100ms
} 
