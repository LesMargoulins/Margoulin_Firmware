// Input.hpp
#ifndef INPUT_HPP_
# define INPUT_HPP_

enum InputType { ENCODER, DPAD };

class Input
{
  public:
    Input(InputType type);
    ~Input();
  private:
    InputType _type;
};

#endif /* INPUT_HPP_ */
