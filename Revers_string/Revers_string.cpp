#include <iostream>

int main(){

    char text[] = "Hello";
    std::cout << text << std::endl;
    
    int len = sizeof(text) - 1;
    char *pStart = text;
    char *pEnd = text + len -1;

    while(pStart < pEnd){
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;
        pStart++;
        pEnd--;
    }
    std::cout << text << std::endl;

}