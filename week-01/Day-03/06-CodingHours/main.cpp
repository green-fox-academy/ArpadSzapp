#include <iostream>

// An average Green Fox attendee codes 6 hours daily

// The semester is 17 weeks long

//

// Print how many hours is spent with coding in a semester by an attendee,

// if the attendee only codes on workdays.

//

// Print the percentage of the coding hours in the semester if the average

// working hours weekly is 52


int main(int argc, char* args[]) {

    int x = 6 * 17 * 5;

    int y = (( 6. * 5. ) / 52. ) * 100.;

    std::cout << x << std::endl,

    std::cout << y << " %" << std::endl;

  return 0;

}