#include <LiquidCrystal.h>
int RS = 7;
int E = 5;
int D4 = 3;
int D5 = 2;
int D6 = 1;
int D7 = 0;
LiquidCrystal lcd (RS, E, D4, D5, D6, D7); //(rs,e,d4,d5,d6,d7)
String tst = "";
int timer = 300;
int j = 0;
void setup()
{
  lcd.begin(16, 2);
  for (int i = 0; i < 17; i++)
  {
    lcd.clear();
    lcd.print(tst);
    tst = tst + ".";
    delay(100);
    lcd.setCursor(0, 1);
  }
}
void loop()
{
  while( j < 11, j++)
  {
    delay(timer);
    lcd.clear();
    lcd.print("|_(");
    lcd.setCursor(3,0);
    lcd.print((char)175);
    lcd.setCursor(4,0);
    lcd.print(")_|");
  }
  j = 42;
}
