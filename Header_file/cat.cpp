#include <iostream>
#include "cat.h"

using namespace std;

Cat::Cat(){
    std::cout << "Cat created" << std::endl;
}
Cat::~Cat(){
    std::cout << name <<" Cat destroyed" << std::endl;
}
void Cat::speak() {

	if (happy) {
		cout << "Very happy!" << endl;
	} else {
		cout << "Saaad!" << endl;
	}
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}

void Cat::colorCat() {
    cout << name << " is " << color <<std::endl;
}

void Cat::talkingCat(){
    
    cout << name << " is ";
    this->Cat::speak();
}


/* << " and is " << this->speak() */