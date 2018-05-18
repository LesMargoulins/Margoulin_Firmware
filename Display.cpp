/*
* GUIGUR 2017 - 2018
* This class diplay stuff on the terminal or lcd or oled display
*/

#include "headers/Display.hpp"
#include <Arduino.h>


Display::Display(enum DisplayType type)
{
  switch (type) {
    case LCD16x2:
      Serial.print("LCD SELECTED");
      _type = type;
      break;
    case OLED:
      break;
      Serial.print("OLED SELECTED");
    default:
      Serial.print("CONSOLE SELECTED");
  }

  Serial.println("TYPE :");
  Serial.println(_type);
  Serial.println("salut");

}

void Display::print()
{

}

Display::~Display()
{

}
