#include <SPI.h>
#include <Wire.h>
#include "headers/Display.hpp"
#include "headers/Menu.hpp"
#include "headers/BatStatus.hpp"
void setup()
{
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  Serial.println("SALUT LES COPAINS");
/*  Menu my_menu;
  BatStatus bat;
  bat.BatStatusMenu();*/
  Display OLED;
}

void loop()
{

}
