#include <iostream>
#include <string>


int unique(int tomb[]){
    int tarolo[]={};

    for(int i=1; i < sizeof(tomb)/sizeof(tomb[0]); ++i){

        if(tomb[i]==tarolo[i]){

            tarolo[i]=tomb[i=0];
        }else{


            tomb[i];
        }
    }
};

int main(int argc, char* args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34, 33, 41};

    unique(numbers);

    std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    return 0;
}
