#include <iostream>
#include <exception>
#include <string>
#include <fstream>

int main() {
    std::ifstream myFile;

    myFile.open("my-text.txt");

    std::string text;


    while(myFile>> text) {

        getline(myFile, text);

        std::cout << text << "\n" << std::endl;
    }

    return 0;
}