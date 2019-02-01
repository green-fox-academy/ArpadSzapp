#include <iostream>

// Write a program that prints the remaining seconds (as an integer) from a

// day if the current time is represented by the variables

int main(int argc, char* args[]) {

  int currentHours = 14;

  int currentMinutes = 34;

  int currentSeconds = 42;

  int seconds = ((currentHours *60 * 60) + (currentMinutes * 60) + currentSeconds);

  int day = (24 * 60 * 60);

  std::cout << day - seconds << std::endl;



  return 0;

}