#include <iostream>

int main(){

    int value1 = 8;

    int *value2 = &value1;

    std::cout << "Value1: " << &value1 << " value2: " << value2 << std::endl;


    return 0;
}