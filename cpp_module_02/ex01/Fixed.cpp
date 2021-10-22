#include "Fixed.hpp"

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
	_fixedPoint = num << _fixedPoint;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor Called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & obj) {
	std::cout << "Assignation Operator Called" << std::endl;
	this->_fixedPoint = obj._fixedPoint;
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "GetRawBits Member Function Called" << std::endl;
	return _fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "SetRawBits Member Function Called!" << std::endl;
	_fixedPoint = raw;
}

