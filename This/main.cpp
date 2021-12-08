#include <iostream>
#include "this.hh"

int main(){

    Person johan;
    Person lise("Lise", 8);
    std::cout << johan.toString() << std::endl;
    std::cout << lise.toString() << std::endl;
    return 0;
}