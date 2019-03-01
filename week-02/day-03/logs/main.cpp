#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

std::vector<std::string> ipadress (std::string file)
{
    std::ifstream myfile;
    myfile.open(file);
    std::string line;

    std::vector<std::string> temp;

    while (std::getline(myfile, line)) {
        std::istringstream ss(line);
        std::string words;
        int counter = 0;

        while (std::getline(ss, words, ' ')) {
            if (counter == 8) {
                if (std::find(temp.begin(), temp.end(), words) == temp.end()) {
                    temp.push_back(words);
                }
            }
            counter++;
        }
    }
    myfile.close();
    return temp;
}

std::string ratio (std::string file)
{
    int get = 0;
    int post = 0;

    std::ifstream myfile;
    myfile.open(file);
    std::string line;

    while (std::getline(myfile, line)) {
        std::istringstream ss(line);
        std::string words;

        int counter = 0;
        while (std::getline(ss, words, ' ')) {
            if (counter == 11) {
                if (words == "GET") {
                    get++;

                } else if (words == "POST") {
                    post++;
                }
            }
            counter++;
        }
    }
    myfile.close();
    return std::to_string(get)+'/'+std::to_string(post);
}


int main ()
{
    std::string txt("log.txt");
    std::vector<std::string> ip_adress = ipadress(txt);

    for (int i = 0; i < ip_adress.size(); ++i) {

        std::cout << ip_adress[i] << std::endl;
    }

    std::cout<<ratio(txt)<<std::endl;

    return 0;
}