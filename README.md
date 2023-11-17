Title: Temperature-Based Fan Controller System with ATmega32

Description:

This embedded system project focuses on creating a temperature-based fan controller using the ATmega32 microcontroller, an LM35 temperature sensor, an LCD display, and a DC motor acting as a fan. The system will automatically adjust the fan's speed based on real-time temperature measurements and display both the fan speed and temperature on the LCD screen.

Components:

ATmega32 Microcontroller: The ATmega32 is the central processing unit responsible for controlling the fan's speed and displaying data on the LCD.

LM35 Temperature Sensor: The LM35 sensor will measure the ambient temperature and provide an analog voltage output that the microcontroller can read.

LCD Display: An LCD screen will be used to visualize and display the temperature and fan speed.

DC Motor (Fan): A DC motor will be utilized as the fan, with its speed controlled by the microcontroller through PWM (Pulse Width Modulation).

Functionality:

Temperature Sensing: The LM35 temperature sensor will continuously monitor the ambient temperature and provide temperature data to the microcontroller.

Fan Control: The fan's speed will be adjusted based on the measured temperature. As the temperature increases, the fan speed will also increase to cool down the environment, and vice versa.

PWM Control: The ATmega32 will use PWM signals to control the DC motor's speed, enabling gradual and precise adjustments.

LCD Display: The LCD screen will display real-time temperature data and the fan's current speed.
