/*
* GUIGUR 2017
* This class take inputs from buttons or rotary encoder or serial terminal
*/

/**
** Mode avec l'encodeur et le bouton sur l'encodeur -> ENC
** Mode avec croix directio
*/

#include "headers/Input.hpp"

Input::Input(InputType type)
{
  _type = type;
}

Input::~Input()
{

}
