#include "counter.h"


counter::counter()
{
  field = 0;
  temp = field;
}
counter::counter(int f)
{
  field = f;
  temp = f;
}
void counter::add(int number)
{
  field += number;
}

void counter::add()
{
  field++;
}
void counter::reset()
{
  field = temp;
}
int counter::get()
{
  return field;
}