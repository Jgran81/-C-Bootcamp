#include <iostream>

//Create a string and output it
//Output all chars with for loop
//Output all chars with while loop

int main(){

    std::string text = "Hello";

    std::cout << "Print normal: " << text << std::endl;

    std::cout << "Print with for loop: ";
    for(char &c : text){
        std::cout << c << std::flush;
    }

    int k = 0;

    std::cout << std::endl <<"Print with while loop: ";
    while(true){
        if(text[k] == 0){
            break;
        }
        std::cout << text[k] << std::flush;
        k++;
    }

    return 0;
}