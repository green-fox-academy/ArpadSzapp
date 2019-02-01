#include <iostream>

  class Animal
  {
   public:

    int hunger;
    int thirst;

  Animal(){ hunger=50; thirst=50;}

    void eat()
    {
       hunger-=1;
    }

    void drink()
    {
      thirst-=1;
    }

    void play()
    {
      hunger+=1;
      thirst+=1;
    }

  };

  int main() {

    Animal cat;



    cat.drink();
    std::cout << cat.hunger << cat.thirst << std::endl;
    cat.eat();
    std::cout << cat.hunger << cat.thirst << std::endl;
    cat.play();
    cat.play();
    std::cout << cat.hunger << cat.thirst << std::endl;

    return 0;
  }

