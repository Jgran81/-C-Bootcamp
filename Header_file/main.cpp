#include <iostream>
#include "cat.h"

using namespace std;

int main() {
	Cat jim;
    jim.color = "brown";
    jim.name = "Jim";
	jim.makeHappy();
	jim.speak();
    jim.colorCat();
    jim.talkingCat();

	Cat bob;
    bob.color = "white";
    bob.name = "Bob";
	bob.makeSad();
	bob.speak();
    bob.colorCat();
    bob.talkingCat();

	return 0;
}