#include <iostream>
#include <sstream>
#include "this.hh"

Person::Person(){
    name = "";
    age = 0;
};
Person::Person(std::string name, int age){
    this->name = name;  //this-> allows you to us same naming of variable in passing argument
    this->age = age;    //this is the adress to the memory of the object
};

std::string Person::toString(){ //sstream method to return a string with toString()
    std::stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << std::endl;
    ss << "Age: ";
    ss << age;
    ss << std::endl;
    return ss.str();
};
Person::~Person(){};