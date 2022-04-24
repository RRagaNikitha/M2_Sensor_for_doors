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

## Requirements
## INTRODUCTION/RESEARCH:
A door sensor is a peripheral security sensor that lets an alarm system know whether a door is opened or closed. When a door is opened, the sensor will activate and let the system know about the situation. The system will then respond based on the programming settings for that zone.
## FEATURES:
* System sends signal when a person /an object passes through the door.
* Easy to install and use.
* Easy to monitor.
## COMPONENTS REQUIRED (HARDWARE):
* Atmega328-----Qty (1)
* Voltmeter-----Qty (2)
* Resistor of 100-ohm resistance-----Qty (1)
* LED-----Qty (1)
* SPST Switch-----Qty (1)
* Connecting wires
## 4’Ws and 1’H:
* What: Sensor for doors
* Where: Home, Offices, Elevators, etc
* When: Used when one needs it for security purpose
* How: When the door is opened, LED glows and when the door is closed, LED stops glowing
## SWOT ANALYSIS:
* Strengths- Easy installment, User friendly
* Weaknesses- Frequent replacement of battery and switches is required
* Opportunities- Can be used for security purposes
* Threats- Weather changes can cause surfaces to expand and contract, and this can lead to false alarms, too.
## HIGH LEVEL REQUIREMENT:
* Door Sensor(switch) to alert the system
* Voltmeter at pin number 1 of PORT B and pin 6 of PORT C
* LED to alert the people around
* Power supply at pin 1
## LOW LEVEL REQUIREMENT:
* Voltmeter should display the voltage value
* LED should glow when door is opened
* LED should not glow when door is closed

