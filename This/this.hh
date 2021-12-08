#ifndef THIS_HH_
#define THIS_HH_

class Person{
private:
    std::string name;
    int age;

public:
    Person();
    Person(std::string name, int age);
    std::string toString();

    ~Person();
};

#endif /* THIS_HH_ */