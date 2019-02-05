#ifndef PIRATES_PIRATE_H
#define PIRATES_PIRATE_H

class Pirate
{

  Pirate();
 public:

  // intoxicates the Pirate some
  void drinkSomeRum();

  /* when called, the Pirate replies, if "drinkSomeRum" was called:
 0 to 4 times, "Pour me anudder!" */
  void howItsGoingMate();

  // this kills off the pirate, in which case,
  // drinkSomeRum, etc. just result in he's dead
  void isdead();




  //where pirate fights another pirate (if that other pirate is alive)
  bool isAlive();


  bool isPassedout();

  // and there's a 1/3 chance, 1 dies, the other dies or they both pass out.
  void brawl();

 private:
  int drunkenLevel;
  bool alive;
  bool passedOut
};

#endif //PIRATES_PIRATE_H
