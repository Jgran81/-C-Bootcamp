#include <iostream>
#include <string>

int digital_root(int n)
{
    std::string num;
    std::string number = std::to_string(n);
    if (number.size() < 2){
        return n;
    }
    else{
        std::string num;
        int result = 0;
        for(int i=0; i<number.size(); i++){
            num = number[i];
            result += stoi(num);
        }
        number = std::to_string(result);
        return digital_root(result);
    }
}
  

int main() 
{ 
    std::cout << digital_root(555);
} 