# Fan-Speed-Controller-with-Temperature
This repository implements a temperature-controlled fan system using an ATmega32 microcontroller. The project includes drivers for ADC, GPIO, LCD, Temperature Sensor, DC-Motor, and PWM. The layered architecture ensures modularity and ease of understanding. The fan speed is dynamically adjusted based on temperature, displayed on an LCD. 

System Features:
ATmega32 Microcontroller @ 1MHz.
LM35 Temperature Sensor for continuous temperature monitoring.
ADC for converting analog signals to digital values.
LCD to display temperature and fan state.
DC-Motor controlled based on temperature thresholds.
PWM used to adjust DC-Motor speed.
Layered Architecture:
ADC Driver:

Full ADC driver with polling design.
Configurable through ADC_ConfigType structure.
GPIO Driver:

Utilizes the GPIO driver from the course.
LCD Driver:

Utilizes the LCD driver from the course.
Connects LCD control pins and 8-bits data pins as specified.
Temperature Sensor Driver:

Uses the Temperature Sensor driver from the course.
Connects LM35 to ADC channel 2.
DC-Motor Driver:

Full DC-Motor Driver with initialization and rotation functions.
Setup motor direction through GPIO.
Adjust motor speed based on input state and speed values.
PWM Driver:

Uses PWM Timer0 function from the course.
Generates a PWM signal with a frequency of 500Hz to control DC-Motor speed.
Hardware Connections:
ATmega32 @ 1MHz.
LM35 connected to ADC channel 2.
LCD connected to specified control pins and data bus.
DC-Motor controlled through GPIO pins.
How to Use:
Clone the repository.
Set up the hardware connections as described in the project documentation.
Build and upload the code to the ATmega32 microcontroller.
Observe the temperature and fan state displayed on the LCD.
The DC-Motor speed adjusts dynamically based on the temperature thresholds.
