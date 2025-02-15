README for SOS.ino

Description

This Arduino sketch blinks an LED to signal SOS in Morse code (three short blinks, three long blinks, three short blinks).

How It Works

Sets the LED pin to OUTPUT mode in the setup() function.

Blinks the LED in the SOS pattern:

Three short blinks

Three long blinks

Three short blinks

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

delay(): Used to control blink duration.

How to Upload

Open the Arduino IDE.

Load the SOS.ino file.

Connect your Arduino board to the computer.

Select the correct board and port from the Tools menu.

Click the upload button.

Sample Output

The LED will blink SOS in Morse code repeatedly.

Notes

Ensure the correct pin number is specified if not using LED_BUILTIN.

Adjust the delay() durations for different blink speeds.
