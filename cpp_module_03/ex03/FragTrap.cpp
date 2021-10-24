#include "FragTrap.hpp"

  /******************/
 /*  Constructors  */
/******************/

FragTrap::FragTrap() {
	std::cout << "FragTrap Default Constructor" << std::endl;
	_name = "Empty";
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & obj) {
	std::cout << "FragTrap Copy Constructor" << std::endl;
	_name = obj._name;
	_hitpoints = obj._hitpoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return ;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Set Name Constructor" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

  /*****************/
 /*  Destructors  */
/*****************/

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << _name << " attack " << target << " causing "
			  << _attackDamage << " points of damage!" << std::endl;
	return ;
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap " << _name << " took " << amount << " damage and now has ";
	_hitpoints -= amount;

	if (_hitpoints < 0)
		_hitpoints = 0;

	std::cout << _hitpoints << std::endl;

	if (_hitpoints == 0) {
		std::cout << "FragTrap " << _name << " has died!" << std::endl;
	}
	return ;
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FragTrap " << _name << " has been healed by " << amount << " and now has ";
	_hitpoints += amount;

	std::cout << _hitpoints << std::endl;
	return ;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap gives Positive High Fives for everyone!!" << std::endl;
	return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

FragTrap & FragTrap::operator=(FragTrap const & obj) {
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return *this;
}
