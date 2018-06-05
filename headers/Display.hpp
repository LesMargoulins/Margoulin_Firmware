// Display.hpp
#ifndef DISPLAY_HPP_
# define DISPLAY_HPP_
# include <String.h>
# include <Arduino.h>
# include <String.h>
# include <LiquidCrystal.h>

enum DisplayType { CONSOLE, LCD16x2, OLED };

class Display
{
  public:
    Display(DisplayType type);
    ~Display();
    void print(char* text);
    void clear();
    void pos(int X, int Y);

    DisplayType getDisplayType();
    void setDisplayType(DisplayType type);
  private:
    DisplayType _type;
    LiquidCrystal _lcd = LiquidCrystal(10, 5, 6, 7, 8, 9);
};

#endif /* DISPLAY_HPP_ */
