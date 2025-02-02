
 # include <Servo.h>  // servo library


Servo servo1;  // servo name


void setup()
{

  servo1.attach(9);
}


void loop()
{
   servo1.write(0);     // Tell servo to go to 0 degrees

  delay(1000);         // Pause to get it time to move
  
  servo1.write(90);    // Tell servo to go to 90 degrees

  delay(1000);         // Pause to get it time to move

  servo1.write(180);   // Tell servo to go to 180 degrees

  delay(1000);         // Pause to get it time to move

  servo1.write(0);     // Tell servo to go to 0 degrees

  delay(1000);         // Pause to get it time to move
  
  
 
  
}

