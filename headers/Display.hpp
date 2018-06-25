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
    void print(String text, int center, int scroll);
    void println(String text);
    void clear();
    void pos(int X, int Y);

    DisplayType getDisplayType();
    void setDisplayType(DisplayType type);
  private:
    DisplayType _type;
    int _cursor;
    const int _lcdRows = 2;
    const int _lcdCols = 16;
    LiquidCrystal _lcd = LiquidCrystal(10, 5, 6, 7, 8, 9);
    String getValue(String data, char separator, int index);
};

#endif /* DISPLAY_HPP_ */
