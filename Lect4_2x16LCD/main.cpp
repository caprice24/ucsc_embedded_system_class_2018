/*********************************************************************************************************/
//
// Lecture 4 - Using External Library for 2x16 LCD Display
//
//
//  TextLDC Library by Simon Ford  https://os.mbed.com/users/simon/code/TextLCD/docs/tip/classTextLCD.html
//
/*********************************************************************************************************/
#include "mbed.h"
#include "TextLCD.h"

//origintal TextLCD lcd(p19, p20, p24, p23, p22, p21); // rs, e, d4-d7
//Nick's
TextLCD lcd(p25, p26, p21, p22, p23, p24); // rs, e, d4-d7
int main() 
{
	static int i;
	while(1)
	{
		lcd.cls();
		lcd.printf("Hello World");
		lcd.locate(0,1);
		lcd.printf("%d",i++);
		wait_ms(1000);
	}
}
