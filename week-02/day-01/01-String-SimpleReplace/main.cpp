#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    std::string example("In a dishwasher far far away");
    std::string galaxyrep("dishwasher");
    //example.replace("dishwasher", "galaxy");

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.

    // Please fix it for me!

    // Expected output: In a galaxy far far away
    int start = example.find(galaxyrep);
    if (start == std::string::npos) {

        std::cout << "cannot raplace" << std::endl;
    } else {

        example.replace(start, galaxyrep.length(), "galaxy");
    }

    std::cout << example << std::endl;
    return 0;
}