void setup() 
{
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH); //set the LED on
delay(1000); // 1 sec delay
digitalWrite(13,LOW);
delay(1000);

}
