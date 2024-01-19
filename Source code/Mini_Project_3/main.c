#include "lcd.h"
#include "adc.h"
#include "Lm35_sensor.h"
#include "Dc_motor.h"


int main(void){

	ADC_ConfigType ADC_Configrations ={INTERNAL,F_CPU_8};

	LCD_init();
	ADC_init(&ADC_Configrations);
	DcMotor_init();

	LCD_displayStringRowColumn(0,1,"FAN is");
	LCD_displayStringRowColumn(1,1,"TEMP = ");

	uint8 temp;

	while(1){

		temp = LM35_getTemperature();

		if(temp < 30 ){

			DcMotor_Rotate(STOP,0);
			LCD_displayStringRowColumn(0,8,"OFF");
			LCD_moveCursor(1,8);
			LCD_intgerToString(temp);
			LCD_displayCharacter(' ');

		}
		else if(temp >= 30 && temp < 60){

			DcMotor_Rotate(CW,25);
			LCD_displayStringRowColumn(0,8,"ON ");
			LCD_moveCursor(1,8);
			LCD_intgerToString(temp);
			LCD_displayCharacter(' ');

		}
		else if(temp >= 60 && temp < 90){

			DcMotor_Rotate(CW,50);
			LCD_displayStringRowColumn(0,8,"ON ");
			LCD_moveCursor(1,8);
			LCD_intgerToString(temp);
			LCD_displayCharacter(' ');

		}
		else if(temp >= 90 && temp < 120  ){

			DcMotor_Rotate(CW,75);
			LCD_displayStringRowColumn(0,8,"ON ");
			LCD_moveCursor(1,8);
			LCD_intgerToString(temp);
			LCD_displayCharacter(' ');

		}
		else{

			DcMotor_Rotate(CW,100);
			LCD_displayStringRowColumn(0,8,"ON ");
			LCD_moveCursor(1,8);
			LCD_intgerToString(temp);

		}


	}



}
