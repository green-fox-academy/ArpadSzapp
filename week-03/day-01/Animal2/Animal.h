/*Create an Animal class
Every animal has a hunger value, which is a whole number
Every animal has a thirst value, which is a whole number
when creating a new animal object these values are created with the default 50 value
Every animal can eat() which decreases their hunger by one
Every animal can drink() which decreases their thirst by one
Every animal can play() which increases both by one*/

#ifndef ANIMAL2_ANIMAL_H
#define ANIMAL2_ANIMAL_H

class Animal
{

 public:
  Animal();

  void eat();
  void drink();
  void play();

  int get_hunger() const;
  int get_thirst() const;

 private:
  int _hunger = 50;
  int _thirst = 50;

};

#endif //ANIMAL2_ANIMAL_H
