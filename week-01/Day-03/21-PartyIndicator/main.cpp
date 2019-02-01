#include <iostream>



int main(int argc, char* args[]) {



  // Write a program that asks for two numbers

  // The first number represents the number of girls that comes to a party, the

  // second the boys

  int girls;
  int boys;
  std::cout << "How much girls, and how much boys are here? " <<std::endl;
  std::cout << "How much girls: ";
  std::cin >> girls;
  std::cout << "How much boys: ";
  std::cin >> boys;
  std::cout<<"Girls: "<< girls << "; " << "Boys: " << boys << "; ";


  // It should print: The party is excellent!

  // If the the number of girls and boys are equal and 20 or more people are coming to the party

  //
  if(girls==boys) {
    if(girls+boys > 20) {

      std::cout << "The party is excellent!" << std::endl;

    }
  }

  // It should print: Quite cool party!

  // If there are 20 or more people coming to the party but the girl - boy ratio is not 1-1

  //
  if((girls+boys > 20)&&(girls != boys)){

    std::cout << "The party is quite cool!" << std::endl;
  }

  // It should print: Average party...

  // If there are less people coming than 20

  //

  if((girls+boys) < 20){

    std::cout << "Average party..." << std::endl;

  }

  // It should print: Sausage party

  // If no girls are coming, regardless the count of the people

  if( girls==0 / boys > 20 ){

    std::cout << "...and sausage party" << std::endl;

  }


  return 0;

}