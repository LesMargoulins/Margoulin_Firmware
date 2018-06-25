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

String Display::getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}

void Display::print(String text, int center, int scroll)
{
  switch (_type) {
    case LCD16x2:
      _lcd.setCursor(0, 0);
      _lcd.print(getValue(text,'\r',0));
      _lcd.setCursor(0, 1);
      _lcd.print(getValue(text,'\r',1));
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
