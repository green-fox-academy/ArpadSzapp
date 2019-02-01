#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int bunniesFloppyEars(int bunny, int earsofbunny) {
    if (bunny > 0) {
        return earsofbunny + (bunniesFloppyEars(bunny-1, earsofbunny)) ;
    } else {
        return bunny;
    }
}

int main() {
    int bunny = 20;
    int earsofbunny = 2;

    std::cout << bunniesFloppyEars(bunny,earsofbunny) << std::endl;
    return 0;
}