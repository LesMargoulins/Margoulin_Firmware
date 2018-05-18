// Display.hpp
#ifndef DISPLAY_HPP_
# define DISPLAY_HPP_

enum DisplayType { CONSOLE, LCD16x2, OLED };

class Display
{
  public:
    Display(enum DisplayType);
    ~Display();
    void print();
  private:
    enum DisplayType _type;
};

#endif /* DISPLAY_HPP_ */
