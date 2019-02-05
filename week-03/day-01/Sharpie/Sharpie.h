#include <string>

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

/*Create Sharpie class
We should know about each sharpie their color (which should be a string), width (which will be a floating point number), inkAmount (another floating point number)
When creating one, we need to specify the color and the width
Every sharpie is created with a default 100 as inkAmount
We can use() the sharpie objects
which decreases inkAmount*/

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

#endif //SHARPIE_SHARPIE_H