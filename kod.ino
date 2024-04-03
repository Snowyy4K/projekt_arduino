#include<LiquidCrystal.h>
LiquidCrystal lcd(2,4,8,9,10,11);
float value;
int tmp = A1;
void setup(){
	pinMode(tmp,INPUT); 
}

void loop(){
	value = analogRead(tmp)*0.004882814*100;
	//value = (value - 0.5) * 100.0;
	lcd.setCursor(0,1);
	lcd.print("Tmp:");
	lcd.print(value);
	delay(1000);
	lcd.clear();

}
	
