#include "../MCAL/ADC/adc_interface.h"
#include "../HAL/LCD/lcd.h"
#include "../HAL/LM35_TEMP_SENSOR/lm35_temperature_interface.h"
#include "../HAL/DC_MOTOR/motor_interface.h"
void main(void)
{
	/*** This variable used to store the temperature ***/
	uint8 temp = 0;
	ADC_init(SENSOR_CHANNEL_ID); /* initialize ADC driver */
	LCD_init(); /* initialize LCD driver */
	MOTOR_init();/* initialize DC_Motor */
	/* Display this string "ADC Value = " only once on LCD at the first row */
	LCD_moveCursor(0,0);
	LCD_displayString("FAN is O");
	LCD_displayString("  ,Speed:");
	LCD_moveCursor(1,0);
	LCD_displayString("Temp =  C ,= ");

    while(1)
    {
    	/* Read ADC channel 2 where the LM35_Sensor is connected */
    	temp = LM35_getTemperature();
		/* Display the ADC digital value every time at same position */
		LCD_moveCursor(1,6);
		if(temp >= 100)
		{
			LCD_displayIntgerNumber(temp);
		}
		else
		{
			LCD_displayIntgerNumber(temp);
			/* In case the digital value is three or two or one digits print space in the next digit place */
			LCD_displayCharacter(' ');
		}
		/*** For the fan speed ***/
		if(temp < 30)
		{
			LCD_moveCursor(0,8);
			LCD_displayString("FF");
			LCD_moveCursor(1,12);
			LCD_displayString("0");
			/*** The fan is off ***/
			STOP_rotatonOfMotor();
		}
		else
		{
			LCD_moveCursor(0,8);
			LCD_displayCharacter('N');
			LCD_displayCharacter(' ');
			MOTOR_directon(CW);
			if(temp  < 60)
			{
				MOTOR_speed(25);
				LCD_moveCursor(1,12);
				LCD_displayString("25");
			}
			else if(temp  < 90)
			{
				MOTOR_speed(50);
				LCD_moveCursor(1,12);
				LCD_displayString("50");
			}
			else if(temp  < 120)
			{
				MOTOR_speed(75);
				LCD_moveCursor(1,12);
				LCD_displayString("75");
			}
			else
			{
				MOTOR_speed(100);
				LCD_moveCursor(1,12);
				LCD_displayString("100");
			}
		}
    }
}
