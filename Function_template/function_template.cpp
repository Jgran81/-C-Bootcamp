#include <iostream>
#include <vector>


//Pass a vector of any type to a function and print its content

template <typename T, typename A>
void PrintVec(std::vector<T,A> const &vec){     //& will not make a copy of the vector
    std::cout << "Func address: " << &vec << std::endl;
    for(int i=0; i<vec.size(); i++){

        std::cout << vec[i] << std::endl;
    }
}

int main(){
    std::vector <int> vec_int = {0, 1, 2, 3, 4, 6, 7};
    std::vector <char> vec_char = {'b', 'h', 'y', 'u'};
    std::vector <std::string> vec_string = {"hello", "world"};
 
    //PrintVec(vec_int);
    /* int arr_int[] = {0, 1, 2, 3};
    char vec_char[] = {'b', 'h', 'yä', 'u'};  */
    std::cout << "Main address: " << &vec_char << std::endl;
    PrintVec(vec_char);
    std::cout << "Main address: " << &vec_int << std::endl;
    PrintVec(vec_int);
    std::cout << "Main address: " << &vec_string << std::endl;
    PrintVec(vec_string);
    

    return 0;
}