#include <iostream>

void manipulate(int &nValue){   //Sending adress of the variable with &
    nValue = 10;                //Changing value of the variable out of scope
    std::cout << "3. Address of int &value: " << &nValue << std::endl;
    std::cout << "4. Value of value: " << nValue << std::endl;
}

int main(){
    int nValue = 9;
    

    int* pnValue = &nValue; //Pointing to the address of nValue
    
    std::cout << "1. Value of nValue: " << nValue << std::endl;
    std::cout << "2. Address of pnValue: " << pnValue << std::endl;
    manipulate(nValue);
    std::cout << "4. Value of nValue: " << nValue << std::endl;

    return 0;
}