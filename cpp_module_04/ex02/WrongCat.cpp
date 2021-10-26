#include "WrongCat.hpp"

  /******************/
 /*  Constructors  */
/******************/

WrongCat::WrongCat() {
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & obj) {
	*this = obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor Called" << std::endl;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void WrongCat::makeSound() const {
	std::cout << "~meowwwwww meowwww~" << std::endl;
	return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

WrongCat & WrongCat::operator=(WrongCat const & obj) {
	(void)obj;
	return *this;
}
