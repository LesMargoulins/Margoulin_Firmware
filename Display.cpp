/*
* GUIGUR 2017 - 2018
* This class diplay stuff on the terminal or lcd or oled display
*/

#include "headers/Display.hpp"


Display::Display(DisplayType type)
{
  _type = type;
  switch (_type) {
    case LCD16x2:
      Serial.print("LCD SELECTED");
        this->_lcd.begin(16, 2);
      //this->_lcd = lcd;
      break;
    case OLED:
      break;
      Serial.print("OLED SELECTED");
    default:
      Serial.print("CONSOLE SELECTED");
  }

  Serial.println("TYPE :");
  Serial.println(_type);
}

Display::~Display()
{
  Serial.println("Destruction Display");
}

void Display::print(String text)
{
  switch (_type) {
    case LCD16x2:
      _lcd.print(text);
      break;
    case OLED:
    //TODO: OLED PRT
      break;
    default:
      Serial.print(text);
  }
}

void Display::println(String text)
{
  switch (_type) {
    case LCD16x2:
      _lcd.setCursor(0,_cursor);
      _lcd.print(text);
      _cursor++;
      break;
    case OLED:
    //TODO: OLED PRT
      break;
    default:
      Serial.println(text);
  }
}


void Display::clear()
{
  switch (_type) {
    case LCD16x2:
      _lcd.clear();
      break;
    case OLED:
    //TODO: OLED CLR
      break;
    default:
      Serial.write(27);
      Serial.print("[2J");
      Serial.write(27);
      Serial.print("[H");
  }
}

DisplayType Display::getDisplayType()
{
  return (this->_type);
}

void Display::setDisplayType(DisplayType type)
{
  this->_type = type;
}
