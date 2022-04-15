#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
void setup() {
  lcd.begin(16,2);// put your setup code here, to run once:

}

void loop() {
lcd.setCursor (0,0);
String a=("Asish Kumar Maharana");
lcd.print(a);
delay(1000);// put your main code here, to run repeatedly:
for(int i=0;i<=a.length();i++)
{
  lcd.scrollDisplayLeft();
  delay(500);
} 
  lcd.clear();
  lcd.setCursor(0,0);
  String b=("Bye!!");
  lcd.print(b);
  delay(1000);
}
