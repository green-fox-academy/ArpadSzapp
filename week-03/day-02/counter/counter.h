#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class counter
{
 public:
  counter();

  counter(int f);

  int field;

  int temp;

  void add(int number);

  void add();

  int get();

  void reset();


};


#endif //COUNTER_COUNTER_H