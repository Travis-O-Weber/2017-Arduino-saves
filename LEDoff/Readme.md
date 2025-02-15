README for LEDoff.ino

Description

This Arduino sketch turns off an LED connected to a specified pin.

How It Works

Sets the LED pin to OUTPUT mode in the setup() function.

Turns the LED off using digitalWrite(LED_BUILTIN, LOW).

Hardware Requirements

Arduino board (e.g., Arduino Uno)

LED

Resistor (220Ω recommended)

Breadboard and jumper wires

Circuit Setup

Connect the LED's anode to digital pin 13 (or the specified pin in the code).

Connect the LED's cathode to ground through a 220Ω resistor.

Code Explanation

digitalWrite(LED_BUILTIN, LOW): Turns the LED off.

How to Upload

Open the Arduino IDE.

Load the LEDoff.ino file.

Connect your Arduino board to the computer.

Select the correct board and port from the Tools menu.

Click the upload button.

Sample Output

The LED connected to pin 13 will remain off.

Notes

Ensure the correct pin number is specified if not using LED_BUILTIN.

This sketch is often used to turn off an LED that was previously turned on.
