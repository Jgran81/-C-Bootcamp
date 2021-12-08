#include <iostream>
#include "overload.hh"

int main(){

    Person johan;                       //creates new obj with constructor 1
    Person johanna("Johanna");          //Creates new object with name with constructor 2
    Person nils("Nils", 3);
    std::cout << johan.toString();      //Name: undefined age: 0
    std::cout << johanna.toString();    //Name: Johanna age 0
    std::cout << nils.toString();

    return 0;
}