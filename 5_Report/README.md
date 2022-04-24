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

## Design
## Block Diagram
![blockdiagram](https://user-images.githubusercontent.com/102669391/164991582-5356635e-df6e-4a0f-9260-a12ff94191a8.jpg)

## Behavioral Diagram
 ![Screenshot (204)](https://user-images.githubusercontent.com/102669391/164991413-4d777d76-9140-4e3e-a90e-0c185822fee8.png)

## Structural Diagram
![image](https://user-images.githubusercontent.com/102669391/164991461-7c9f4267-a7e9-4a48-ad9a-9cc607525a3a.png)

## Flow Chart
![image](https://user-images.githubusercontent.com/102669391/164991511-7727399c-3aae-4ac9-a47f-3136c1014cab.png)

## Simulation Diagram
![Screenshot (207)](https://user-images.githubusercontent.com/102669391/164992277-3974fbf5-0d2f-4faa-bb8f-02cb9fc7d1f7.png)

## Test Plan
![Screenshot (206)](https://user-images.githubusercontent.com/102669391/164992074-1d9384c7-a075-48ea-b5fc-8859e3716ce1.png)

## SimulIDE Version- 1.0.0-RC2 R1007
## Outpur Images
* Case 1 - Switch in open state and power supply is not provided---> LED in off state
![Screenshot (208)](https://user-images.githubusercontent.com/102669391/164992855-f00cc4fe-230b-46f6-b5f1-d366a75bd33e.png)

* Case 2 - Switch in close state and power supply is not provided---> LED in off state
![Screenshot (209)](https://user-images.githubusercontent.com/102669391/164992921-d6ef82ec-64f5-4559-b028-3768b3c66ec8.png)

* Case 3 - Switch in open state and power supply is provided---> LED in on state
![Screenshot (210)](https://user-images.githubusercontent.com/102669391/164992959-f9f49c7d-0de5-4870-8ab7-4e2c76e4394d.png)

* Case 4 - Switch in close state and power supply is provided---> LED in off state
![Screenshot (211)](https://user-images.githubusercontent.com/102669391/164993014-f82a1595-560e-42ac-9e3b-3ac11c37176e.png)
