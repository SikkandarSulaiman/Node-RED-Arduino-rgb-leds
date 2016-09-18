# Node-RED-Arduino-rgb-leds
a UI created in Node-RED to communicate with Arduino to control and display intensity of rgb leds

Node-RED flow:
------------------------------------------------------------------------------------------------
Before starting this project update your Node-RED, npm and install node-red-contrib-ui

Then copy fom the text file, open Node-RED -> import -> copy from clipboard and paste it.
Now you'll be seeing the configured nodes.

There are 2 nodes named Arduino. Open both nodes and specify the address of your Arduino board.
For example specify the COM port if you're using windows.
If necessary click gauge node and change the min and max values according to your environment light.

Arduino sketch:
------------------------------------------------------------------------------------------------
The sketch serially receives commands and generate pwm signals specified in the commands.
It also transmits analog voltage read from LDR which is the rough intensity range.

Hardware Setup:
------------------------------------------------------------------------------------------------
Here I'm using a common cathode rgb led.
Green leg of rgb led is connected to digital pin 2 of Arduino.
Red leg of rgb led is connected to digital pin 3 of Arduino.
Blue leg of rgb led is connected to digital pin 4 of Arduino.
Common cathode pin is connected to any of the ground pins of Arduino.
Make sure all the connections are made through suitable resistors.

Connect 1 leg of LDR to any of the 5v pins of Arduino and another leg to analog pin A1.
Take a 12k ohm (approx) resistor and connect from analog pin A1 to any of the ground pins of Arduino.

Arduino must be connected to pc serially using a (typical Arduino) usb type A to type B cable.
