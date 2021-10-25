#include "Dog.hpp"

  /******************/
 /*  Constructors  */
/******************/

Dog::Dog() {
	std::cout << "Dog Default Constructor Called" << std::endl;
	type = "Dog";
	brain = new Brain();
	return ;
}

Dog::Dog(Dog const & obj) {
	*this = obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

Dog::~Dog() {
	std::cout << "Dog Destructor Called" << std::endl;
	delete brain;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void Dog::makeSound() const {
	std::cout << "~wooof wooooof~" << std::endl;
	return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Dog & Dog::operator=(Dog const & obj) {
	(void)obj;
	return *this;
}
