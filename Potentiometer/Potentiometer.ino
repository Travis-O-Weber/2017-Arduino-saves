
int (sensorPin);
int (ledPin);

void setup() 
{
  // put your setup code here, to run once:
pinMode(13,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
 int senserValue; 
senserValue=analogRead(sensorPin);
digitalWrite(13,HIGH); //set the LED on
delay(senserValue); //  delay
digitalWrite(13,LOW);
delay(senserValue); // delay


}
