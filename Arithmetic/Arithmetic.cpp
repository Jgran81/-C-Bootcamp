#include <iostream>

int main(){

    double value = (double)7/2;     //Casting of an int
    std::cout << value << std::endl;

    char letter = '1';
    std::cout <<  "Type of char letter: " <<typeid(letter).name() << std::endl;
    std::cout <<  "Type of char letter: " <<typeid((int)letter).name() << std::endl;

    int value2 = 7;
    value2 += 1;    //same as ++
    std::cout <<  "value2: " << value2 << std::endl;

    int value3 = 10;
    value3 /= 5;    //same as value3 = value3 / 5
    std::cout <<  "value3: " << value3 << std::endl;

    int value4 = 12%5;  //Remainder after int division
    std::cout <<  "value4: " << value4 << std::endl;

    

    return 0;
}