#include "WrongAnimal.hpp"

  /******************/
 /*  Constructors  */
/******************/

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & obj) {
	*this = obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor Called" << std::endl;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "~WrongAnimal noise~" << std::endl;
	return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & obj) {
	(void)obj;
	return *this;
}
