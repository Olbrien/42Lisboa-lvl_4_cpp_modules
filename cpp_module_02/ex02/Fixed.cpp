#include "Fixed.hpp"

  /******************/
 /*  Constructors  */
/******************/

Fixed::Fixed() {
	//std::cout << "Default Constructor Called" << std::endl;
	setRawBits(0);
	return ;
}

Fixed::Fixed(Fixed const & obj) {
	//std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

Fixed::Fixed(int const num) {
	//std::cout << "Int Constructor Called" << std::endl;
	_fixedPoint = num << _fractBits;
	return ;
}

Fixed::Fixed(float const num) {
	//std::cout << "Float Constructor Called" << std::endl;
	_fixedPoint = (int)(roundf(num * (1 << _fractBits)));
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

Fixed::~Fixed() {
	//std::cout << "Destructor Called" << std::endl;
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

Fixed & Fixed::min(Fixed & objA, Fixed & objB) {
	if (objA < objB)
		return objA;
	else
		return objB;
}

const Fixed & Fixed::min(Fixed const & objA, Fixed const & objB) {
	if ((Fixed)objA < (Fixed)objB)
		return objA;
	else
		return objB;
}

Fixed & Fixed::max(Fixed & objA, Fixed & objB) {
	if (objA > objB)
		return objA;
	else
		return objB;
}

const Fixed & Fixed::max(Fixed const & objA, Fixed const & objB) {
	if ((Fixed)objA > (Fixed)objB)
		return objA;
	else
		return objB;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Fixed & Fixed::operator=(Fixed const & obj) {
	//std::cout << "Assignation Operator Called" << std::endl;
	_fixedPoint = obj._fixedPoint;
	return *this;
}

bool Fixed::operator>(Fixed const & obj) {
	return (_fixedPoint > obj.getRawBits());
}

bool Fixed::operator<(Fixed const & obj) {
	return (_fixedPoint < obj.getRawBits());
}

bool Fixed::operator>=(Fixed const & obj) {
	return (_fixedPoint >= obj.getRawBits());
}

bool Fixed::operator<=(Fixed const & obj) {
	return (_fixedPoint <= obj.getRawBits());
}

bool Fixed::operator==(Fixed const & obj) {
	return (_fixedPoint == obj.getRawBits());
}

bool Fixed::operator!=(Fixed const & obj) {
	return (_fixedPoint != obj.getRawBits());
}

Fixed Fixed::operator+(Fixed const & obj) {
	Fixed ret;
	ret.setRawBits(this->getRawBits() + obj.getRawBits());
	return ret;
}

Fixed Fixed::operator-(Fixed const & obj) {
	Fixed ret;
	ret.setRawBits(this->getRawBits() - obj.getRawBits());
	return ret;
}

Fixed Fixed::operator*(Fixed const & obj) {
	Fixed ret;
	ret.setRawBits(this->getRawBits() * obj.getRawBits() / (1 << _fractBits));
	return ret;
}

Fixed Fixed::operator/(Fixed const & obj) {
	Fixed ret;
	ret.setRawBits(this->getRawBits() / obj.getRawBits() * (1 << _fractBits));
	return ret;
}

Fixed & Fixed::operator++(void) {
	this->_fixedPoint +=1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed ret = *this;
	this->_fixedPoint +=1;
	return ret;
}

Fixed & Fixed::operator--(void) {
	this->_fixedPoint -=1;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed ret = *this;
	this->_fixedPoint -=1;
	return ret;
}

  /**********************************/
 /*  Operator Overloading Ostream  */
/**********************************/

std::ostream & operator<<(std::ostream & output, Fixed const & obj) {
	output << obj.toFloat();
	return output;
}

