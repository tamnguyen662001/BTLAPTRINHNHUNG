#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,7,6,5,4);
#define led 3

void setup() {
  pinMode(led, OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("BT3 LM35+LED");
  delay(1000);

}

void loop() {
  int value = analogRead(A0);
  int temp   = map(value, 0, 1023, 0, 500);
  lcd.setCursor(0,1);
  lcd.print("Temperature : ");
  lcd.print(temp);
  if(temp > 35){
    digitalWrite(led,1);}
    else{
      digitalWrite(led,0);}
  delay(100);
}
