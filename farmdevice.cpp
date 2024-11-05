#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <ESP32Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo mesin;

void setup() {
  Serial.begin(115200);
  lcd.init();
  lcd.begin(16, 2);
  lcd.backlight();
  mesin.attach(17);
}

void loop() {
  mesin.write(0);
  lcd.clear();
  for (int i = 5; i >=0; i--) {
    lcd.setCursor(0,0);
      lcd.print("Terbuka dalam:");
    lcd.setCursor(0,1);
    lcd.print(i);
    lcd.print(" jam");
    if (i == 0) {
      lcd.clear();
      lcd.setCursor(4,0);
      lcd.print("Terbuka");
      mesin.write(180);
      delay(500);
    }
    delay(1000);
  }
}