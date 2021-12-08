#include <iostream>
#include <sstream>
#include "overload.hh"


Person::Person(){   //constructor defining name and age automaticly
    name = "undefined";
    age = 0;
}
Person::Person(std::string newName, int newAge) {   //const 2, does not have to be here.
    name = newName; 
    age = newAge;
};
Person::~Person(){  //destructor

}
std::string Person::toString(){ //sstream method to return a string with toString()
    std::stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << std::endl;
    ss << "Age: ";
    ss << age;
    ss << std::endl;
    return ss.str();
}