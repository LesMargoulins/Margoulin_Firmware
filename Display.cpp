/*
* GUIGUR 2017 - 2018
* This class diplay stuff on the terminal or lcd or oled display
*/

# include "headers/Display.hpp"


Display::Display(enum DisplayType type)
{
  _type = type;
  switch (_type) {
    case LCD16x2:
      Serial.print("LCD SELECTED");
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
  Serial.println("salut");
}

Display::~Display()
{

}

void Display::print(char* text)
{
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
