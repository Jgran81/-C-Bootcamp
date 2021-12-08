#ifndef PERSON_HH_
#define PERSON_HH_

class Person{
private:
    std::string name;
    int age;

public:
    Person(): name(""), age(0){};                   //const 1 defining name and age automaticly
    Person(std::string name): name(name), age(0){}; //Const 2 setting name from main
    Person(std::string name, int age): name(name), age(age){};         //Const 3 setting name and age from main
    std::string toString();                    //cout method to print name and age with sstream

    ~Person();
};



#endif /* PERSON_HH_ */