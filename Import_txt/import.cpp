#include <iostream>
#include <fstream>
#include <vector>
//#include <typeinfo>
#include <string> 
//#include <cstdlib>

//#include <string_view> 


int main(){
    int num;
    
    std::string line;
    std::vector<int> numbers;
    
    std::ifstream input;
    input.open("text.txt", std::ios_base::in);
    

    
    while (std::getline(input, line)) {
        for(int cnt = 0; cnt < line.size(); ++cnt){
            if (line[cnt]<= '9' && line[cnt]>= '0'){
                num = std::stoi(line.substr(cnt,1));
                numbers.push_back(num);
            }
        }
        
    }
    input.close();
    int i = 1;
    for (int &x : numbers){
        std::cout << i << " : " << x << std::endl;
        i++;
    }  
    
        return 0;
}
