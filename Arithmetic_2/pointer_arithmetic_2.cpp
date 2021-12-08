#include <iostream>

int main(){

    const int NSTRINGS = 5;

    std::string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    std::string* pTexts = texts;    //pointer to first element in array

    std::cout << *pTexts << std::endl;  //dereferencing the pointer, getting the value

    std::string *pEnd = &texts[NSTRINGS];

    //std::cout << *pEnd << std::endl;

    while(pTexts != pEnd){  //while addresses are not the same
        std::cout <<  pTexts << " " <<  *pTexts << std::endl;   //print adress and value
        pTexts++;   //increment pTexts with 1. 32 between each mem location
    }

    pTexts = &texts[0];

    int elements = pEnd - pTexts;

    std::cout << elements << std::endl;

    pTexts += NSTRINGS/2;   // -> 5/2 + 0 = 2  int removes the decimal

    std::cout << *pTexts << std::endl;  //prints "three" as it is at position 2
}