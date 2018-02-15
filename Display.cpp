/*
* GUIGUR 2017 - 2018
* This class diplay stuff on the terminal or lcd or oled display
*/

#include "headers/Display.hpp"

Display::Display()
{
  Serial.print("test");
  Adafruit_SSD1306 oled(OLED_RESET);

  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
  oled.display();
  delay(2000);
  //oled.clearDisplay();
  //oled.display();
  Serial.print("salut");
//  oled.clearDisplay();
//  oled.drawPixel(10, 10, WHITE);
//  oled.display();
}

Display::~Display()
{

}
