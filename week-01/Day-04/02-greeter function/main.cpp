#include <iostream>
#include <string>

void greet(std::string a);
int main(int argc, char* args[]) {



 // - Create a string variable named `al` and assign the value `Greenfox` to it
std::string a1 = "Greenfox";
   
 // - Create a function called `greet` that greets it's input parameter

 // - Greeting is printing e.g. `Greetings dear, Greenfox`

    greet(a1);

 // - Greet `al`

    return 0;

}
void greet(std::string a){

        std::cout << " Greetings dear," << a << std::endl;
}