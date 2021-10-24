#include "DiamondTrap.hpp"

  /******************/
 /*  Constructors  */
/******************/

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default Constructor" << std::endl;

	_name = ClapTrap::_name;
	ClapTrap::_name = ClapTrap::_name + "_clap_name";

	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj) {
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	_name = obj._name;
	_hitpoints = obj._hitpoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap Set Name Constructor" << std::endl;

	this->_name = name;
	ClapTrap::_name = _name + "_clap_name";

	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;

	return ;
}

  /*****************/
 /*  Destructors  */
/*****************/

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

std::string DiamondTrap::getDiamondName() const {
	return DiamondTrap::_name;
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
	return ;
}

void DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << "DiamondTrap " << _name << " took " << amount << " damage and now has ";
	_hitpoints -= amount;

	if (_hitpoints < 0)
		_hitpoints = 0;

	std::cout << _hitpoints << std::endl;

	if (_hitpoints == 0) {
		std::cout << "DiamondTrap " << _name << " has died!" << std::endl;
	}
	return ;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	std::cout << "DiamondTrap " << _name << " has been healed by " << amount << " and now has ";
	_hitpoints += amount;

	std::cout << _hitpoints << std::endl;
	return ;
}

void DiamondTrap::whoAmI() {
	std::cout << "Hello my DiamondTrap name is " << _name << " and my ClapTrap name is "
			  << ClapTrap::_name << std::endl;
	return;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & obj) {
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return *this;
}
