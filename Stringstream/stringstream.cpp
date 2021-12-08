#include <iostream>
#include <sstream>                  //Dont forget to add <sstream>

int main(){

    int number = 40;
    std::string name = "Johan";
    std::stringstream numberName;   //stringstream class
    
    numberName << "Your name is: "; //I guess this just appends this to the back of the stringstream
    numberName << name;
    numberName << ", and you are ";
    numberName << number;
    numberName << " years old.";

    std::string info = numberName.str();    //make a string of the stringstream

    std::cout << info << std::endl;


    

    return 0;

}