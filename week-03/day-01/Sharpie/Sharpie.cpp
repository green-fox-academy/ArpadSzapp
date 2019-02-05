#include "Sharpie.h"

Sharpie::Sharpie ()
{}

void Sharpie::use ()
{
    _inkAmount-=_width;
}

const std::string &Sharpie::get_color () const
{
    return _color;
}
void Sharpie::set_color (const std::string &_color)
{
    Sharpie::_color = _color;
}
float Sharpie::get_width () const
{
    return _width;
}
void Sharpie::set_width (float _width)
{
    Sharpie::_width = _width;
}
float Sharpie::get_inkAmount () const
{
    return _inkAmount;
}
void Sharpie::set_inkAmount (float _inkAmount)
{
    Sharpie::_inkAmount = _inkAmount;
}
