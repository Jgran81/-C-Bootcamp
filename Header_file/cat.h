#ifndef CAT_H_
#define CAT_H_

class Cat {
/* enum Color{brown, black, white}; */
public:
	bool happy;
    std::string color;
    std::string name;

    
public:
    Cat();
    ~Cat();
	void makeHappy();
	void makeSad();
	void speak();
    void colorCat();
    void talkingCat();
};

#endif /* CAT_H_ */