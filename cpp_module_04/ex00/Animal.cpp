#include "Animal.hpp"

  /******************/
 /*  Constructors  */
/******************/

Animal::Animal() {
	std::cout << "Animal Default Constructor Called" << std::endl;
	return ;
}

Animal::Animal(Animal const & obj) {
	*this = obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

Animal::~Animal() {
	std::cout << "Animal Destructor Called" << std::endl;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "~animal noise~" << std::endl;
	return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Animal & Animal::operator=(Animal const & obj) {
	(void)obj;
	return *this;
}
