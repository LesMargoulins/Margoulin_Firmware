#include <SPI.h>
#include <Wire.h>
#include "headers/Display.hpp"
#include "headers/Menu.hpp"
#include "headers/BatStatus.hpp"

void setup()
{
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("SALUT LES COPAINS");
  Display lcd(LCD16x2);
/*  Menu my_menu;
  BatStatus bat;
  bat.BatStatusMenu();*/
  //Display OLED;
}

void loop()
{

}
