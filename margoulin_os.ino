#include <SPI.h>
#include <Wire.h>
#include <WString.h>
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
  Display display(LCD16x2);
  display.clear();
  display.print("Margoulineur2000\rREVB");
//  display.prints("Margoulineur2000 REVB");
/*  Menu my_menu;
  BatStatus bat;
  bat.BatStatusMenu();*/
  //Display OLED;
}

void loop()
{

}
