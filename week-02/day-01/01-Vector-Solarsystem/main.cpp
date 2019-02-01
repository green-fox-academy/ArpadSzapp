#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string> &planets)
{
    std::vector<std::string> arraycopy(planets); //create a vector what has the parameters from the incoming.
    std::vector<std::string>::iterator iter = arraycopy.begin(); //iterator vector from the begin.
    arraycopy.insert(iter + 5,
                     1,
                     " Saturn "); //insert to the vector (from iterator-vector place in the first vector, " the thing u want to insert ");
    return arraycopy; //the return for the iterator loop
}
int main(int argc, char *args[])
{
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.
    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune

    std::vector<std::string> correctPlanets = putSaturn(planets);

    for (int i = 0; i < correctPlanets.size(); ++i) {

        std::cout << correctPlanets[i] << " ";
    }

    return 0;

}