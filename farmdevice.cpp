#include <LiquidCrystal_I2C.h> // Include the LiquidCrystal_I2C library for I2C LCD control
#include <Wire.h> // Include the Wire library for I2C communication
#include <ESP32Servo.h> // Include the ESP32Servo library for controlling servo motors

LiquidCrystal_I2C lcd(0x27, 16, 2); // Create an LCD object with I2C address 0x27 and dimensions 16x2
Servo mesin; // Create a Servo object to control the servo motor

void setup() {
  Serial.begin(115200); // Initialize serial communication at 115200 baud rate
  lcd.init(); // Initialize the LCD
  lcd.begin(16, 2); // Set the LCD dimensions (16 columns and 2 rows)
  lcd.backlight(); // Turn on the LCD backlight
  mesin.attach(17); // Attach the servo motor to pin 17
}

void loop() {
  mesin.write(0); // Set the servo position to 0 degrees
  lcd.clear(); // Clear the LCD display
  for (int i = 5; i >= 0; i--) { // Countdown from 5 to 0
    lcd.setCursor(0, 0); // Set the cursor to the first row, first column
    lcd.print("Terbuka dalam:"); // Print the countdown message
    lcd.setCursor(0, 1); // Set the cursor to the second row, first column
    lcd.print(i); // Print the current countdown value
    lcd.print(" jam"); // Print the unit "jam" (hours)
    
    if (i == 0) { // When the countdown reaches 0
      lcd.clear(); // Clear the LCD display
      lcd.setCursor(4, 0); // Set the cursor to the first row, fifth column
      lcd.print("Terbuka"); // Print the message "Terbuka" (Open)
      mesin.write(180); // Set the servo position to 180 degrees
      delay(500); // Wait for 500 milliseconds
    }
    delay(1000); // Wait for 1 second before the next iteration of the loop
  }
}
