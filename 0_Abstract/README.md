## Abstract
## SENSOR FOR DOORS
The name of the project is taken from a problem statement (mentioned below in the references).
An AVR (Alf and Vegard’s RISC processor) C program is 
written to monitor the door sensor. When the door is closed, 
LED is in the OFF state and when the door is opened, LED is 
in the ON state.
## References –
+ https://what-when-how.com/8051-microcontroller/ioprogramming-in-8051-c/
+ https://online-studytable.blogspot.com/2020/06/a-doorsensor-is-connected-to-bit-1-of.html
## Changes I made to my program
* The door sensor is connected to 1st bit of port B and an LED is connected to the 6th bit of port C (reset bit of atmega328).
* An AVR C program monitors the door sensor without changing the state of other pins (masking is done)
