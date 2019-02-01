#include "Sharpie.h"


Sharpie::Sharpie(std::string _color, float _width)
{
  color = _color;
  width = _width;
  inkAmount = 100;
}

void Sharpie::use()
{
  inkAmount --;
}