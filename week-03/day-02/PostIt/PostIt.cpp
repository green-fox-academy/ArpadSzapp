#include <iostream>
#include "PostIt.h"

PostIt::PostIt(std::string bgcolor, std::string txt, std::string txtcolor) {
  backGroundColor = bgcolor;
  text = txt;
  textColor = txtcolor;
}