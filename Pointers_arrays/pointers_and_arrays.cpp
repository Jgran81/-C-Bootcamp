#include <iostream>

int main(){

std::string texts[] = {"one", "two", "three"};
std::string* pTexts = texts;

std::cout << sizeof(texts) << std::endl;        //??? 96
std::cout << sizeof(std::string) << std::endl;  //??? 32

std::cout << sizeof(texts)/sizeof(std::string) << std::endl;    //Arraysize 96/32= 3

for(const std::string &texts : texts){  //looping over an array without sizeof()
    std::cout << texts << " " << &texts << std::endl;   //print value of array position and adress to that value
}
std::cout << "*pTexts: " << *pTexts << std::endl;   //="one"
std::cout << "pTexts: " << pTexts << std::endl;     // Adress of "one"


for(const std::string &texts : texts){  //looping over an array without sizeof()
    std::cout << *pTexts << " " << pTexts << std::endl; //printing dereference of pText (value) and adress to the value
    *pTexts++;  //moving the pointer to the next value
}

//std::cout << "*pText after loop" <<*pTexts << std::endl;
//std::cout << std::endl;

std::string* pElement = &texts[0];
std::string* pLastElement = &texts[2];

while(true){
    std::cout << *pElement << " " << std::flush;    //Looping over the elemets of texts using *pElement

    if(pElement == pLastElement){   //break if pElement and pLastElement have the same address
        break;
    }
    pElement++; //move the address to the next spot in the array
}
std::cout << std::endl;


return 0;
}