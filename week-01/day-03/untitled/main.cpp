#include <iostream>
#include <string>

void doubling(int a);

int main(int argc, char* args[]) {
        // - Create an integer variable named `baseNum` and assign the value `123` to it
int baseNum = 123;
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
doubling(baseNum);
    // - Print the result of `doubling(baseNum)`

    return 0;

}
void doubling( int a ) {
    a*=2;
    std::cout<<a<<std::endl;
}