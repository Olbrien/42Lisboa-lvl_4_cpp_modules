#include "Fixed.hpp"

  /******************/
 /*  Constructors  */
/******************/

Fixed::Fixed() {
	std::cout << "Default Constructor Called" << std::endl;
	setRawBits(0);
	return ;
}

Fixed::Fixed(Fixed const & obj) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

Fixed::Fixed(int const num) {
	std::cout << "Int Constructor Called" << std::endl;
	_fixedPoint = num << _fractBits;
	return ;
}

Fixed::Fixed(float const num) {
	std::cout << "Float Constructor Called" << std::endl;
	_fixedPoint = (int)(roundf(num * (1 << _fractBits)));
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

Fixed::~Fixed() {
	std::cout << "Destructor Called" << std::endl;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

int Fixed::getRawBits( void ) const {
	return _fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
	_fixedPoint = raw;
	return ;
}

float Fixed::toFloat( void ) const {
	return ((float)_fixedPoint / (float)(1 << _fractBits));
}

int Fixed::toInt ( void ) const {
	return ((int)(_fixedPoint >> _fractBits));
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Fixed & Fixed::operator=(Fixed const & obj) {
	std::cout << "Assignation Operator Called" << std::endl;
	_fixedPoint = obj._fixedPoint;
	return *this;
}

  /**********************************/
 /*  Operator Overloading Ostream  */
/**********************************/

std::ostream & operator<<(std::ostream & output, Fixed const & obj) {
	output << obj.toFloat();
	return output;
}

