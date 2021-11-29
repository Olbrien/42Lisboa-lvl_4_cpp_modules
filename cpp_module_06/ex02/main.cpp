#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

void identify(Base& p) {
	try {
		Base & a = dynamic_cast<A &>(p);
		std::cout << "Identified as A as well" << std::endl;
		(void)a;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Base & b = dynamic_cast<B &>(p);
		std::cout << "Identified as B as well" << std::endl;
		(void)b;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Base & c = dynamic_cast<C &>(p);
		std::cout << "Identified as C as well" << std::endl;
		(void)c;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p)){
		std::cout << "Identified as A" << std::endl;
	}
	else if (dynamic_cast<B *>(p)){
		std::cout << "Identified as B" << std::endl;
	}
	else if (dynamic_cast<C *>(p)){
		std::cout << "Identified as C" << std::endl;
	}
}

Base * generate(void) {
	srand((unsigned int)time(NULL));
	int nRandonNumber = rand()%((0)-3) + 0;

	if (nRandonNumber == 0) {
		Base *a = new A();
		std::cout << "Created A" << std::endl;
		return a;
	}
	else if (nRandonNumber == 1) {
		Base *b = new B();
		std::cout << "Created B" << std::endl;
		return b;
	}
	else if (nRandonNumber == 2) {
		Base *c = new C();
		std::cout << "Created C" << std::endl;
		return c;
	}

	return 0;
}

int main() {
	Base *random = generate();

	Base & random2 = *random;

	identify(random);
	identify(random2);

	delete random;
}
