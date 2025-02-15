README for Potentiometer.ino

Description

This Arduino sketch reads the value from a potentiometer and prints it to the serial monitor.

How It Works

Sets the potentiometer pin to INPUT mode in the setup() function.

Continuously reads the analog value from the potentiometer using analogRead().

Prints the read value to the serial monitor.

Hardware Requirements

Arduino board (e.g., Arduino Uno)

Potentiometer

Breadboard and jumper wires

Circuit Setup

Connect the middle pin of the potentiometer to an analog pin (e.g., A0).

Connect one outer pin to 5V and the other to GND.

Code Explanation

analogRead(A0): Reads the analog value from pin A0.

Serial.print(): Displays the value on the serial monitor.

How to Upload

Open the Arduino IDE.

Load the Potentiometer.ino file.

Connect your Arduino board to the computer.

Select the correct board and port from the Tools menu.

Click the upload button.

Sample Output

Potentiometer value: 523
Potentiometer value: 710
Potentiometer value: 342

Notes

Ensure the correct pin number is specified if not using A0.

Adjust the potentiometer to see the values change in the serial monitor.
