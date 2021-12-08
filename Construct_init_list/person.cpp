#include <iostream>
#include <sstream>
#include "person.hh"

  

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
Person::~Person(){  //destructor

}