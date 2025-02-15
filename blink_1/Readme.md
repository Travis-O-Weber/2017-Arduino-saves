This Arduino sketch controls an LED to blink on and off at regular intervals.

How It Works

Sets the LED pin to OUTPUT mode in the setup() function.

Turns the LED on for a set duration, then turns it off for the same duration in the loop() function.

Hardware Requirements

Arduino board (e.g., Arduino Uno)

LED

Resistor (220Ω recommended)

Breadboard and jumper wires

Circuit Setup

Connect the LED's anode to digital pin 13 (or the specified pin in the code).

Connect the LED's cathode to ground through a 220Ω resistor.

Code Explanation

digitalWrite(LED_BUILTIN, HIGH): Turns the LED on.

digitalWrite(LED_BUILTIN, LOW): Turns the LED off.

delay(1000): Waits for 1000 milliseconds (1 second) between state changes.

How to Upload

Open the Arduino IDE.

Load the blink_1.ino file.

Connect your Arduino board to the computer.

Select the correct board and port from the Tools menu.

Click the upload button.

Sample Output

The LED connected to pin 13 will blink on and off every second.

Notes

Ensure the correct pin number is specified if not using LED_BUILTIN.

Adjust the delay() value to change the blinking speed.

