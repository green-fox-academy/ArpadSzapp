#include <iostream>

#include <string>



int main(int argc, char* args[]) {

  // Create a program that prints all the even numbers between 0 and 500

  int num=-1;

  while( (num+=1) != 501 ){

    std::cout << num <<std::endl;

  }


    return 0;

}