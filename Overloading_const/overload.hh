#ifndef OVERLOAD_HH_
#define OVERLOAD_HH_

class Person{
private:
    std::string name;
    int age;

public:
    Person();                                                               //Constructor 1, setting name and age in cpp file
    Person(std::string newName) {name = newName; age = 0;};                 //Const 2 setting name from main
    Person(std::string newName, int newAge);//Const 2 setting name and age from main
    std::string toString();                                                 //cout method to print name and age with sstream

    ~Person();
};
#endif /* OVERLOAD_HH_ */