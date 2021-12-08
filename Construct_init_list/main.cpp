#include <iostream>
#include "person.hh"

int main(){

    Person person1;
    Person johan;                       //creates new obj with constructor 1
    Person johanna("Johanna");          //Creates new object with name with constructor 2
    Person nils("Nils", 3);
    std::cout << johan.toString();      //Name: undefined age: 0
    std::cout << johanna.toString();    //Name: Johanna age 0
    std::cout << nils.toString();
    std::cout << person1.toString();

    return 0;
}