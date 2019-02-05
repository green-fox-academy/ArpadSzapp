#include<iostream>
#include "Pirate.h"

Pirate::Pirate()
{
    drunkenLevel = 0;
    alive = true;
    passedOut = false;
}

//The pirate is drinkSomeRum, the drunkenLevel++
void Pirate::drinkSomeRum()
{
    drunkenLevel++;
}

// when the pirate is drink 4 times, ask the pirate howItsGoingMate.
void Pirate::howItsGoingMate()
{
    // if the pirate is drink less than 5 times,
    if (drunkenLevel < 5) {
        //drinkSomeRun was called: //0 to 4 times, "Pour me anudder!"
        std::cout << "Pour me anudder!" << std::endl;

    } else {
        //else, "Arghh, I'ma Pirate. How d'ya d'ink its goin?",
        std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin?" << std::endl;

        //the pirate passedOut and sleeps it off = true.
        passedOut = true;
    }

}
//when a pirate is not alive isdead
void Pirate::isdead()
{
    alive = false;
}

//where pirate fights another pirate (if that other pirate is alive)
//return isAlive True-False
bool Pirate::isAlive()
{
    return alive;
}

// and there's a 1/3 chance, 1 isdead, the other isdead or they both passedOut.
bool Pirate::isPassedout()
{
    return passedOut;
}

