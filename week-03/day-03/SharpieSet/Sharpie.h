#ifndef SHARPIESET_SHARPIE_H
#define SHARPIESET_SHARPIE_H
#include <iostream>

class Sharpie
{
 public:

  Sharpie ();

  void use ();


 public:

  const std::string &get_color () const;

  void set_color (const std::string &_color);

  float get_width () const;

  void set_width (float _width);

  float get_inkAmount () const;

  void set_inkAmount (float _inkAmount);

 private:
  std::string _color;
  float _width;
  float _inkAmount = 100;

};

#endif //SHARPIESET_SHARPIE_H
