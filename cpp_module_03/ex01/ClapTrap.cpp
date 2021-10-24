#include "ClapTrap.hpp"

  /******************/
 /*  Constructors  */
/******************/

ClapTrap::ClapTrap() : _name("Empty"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default Constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & obj) {
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	*this = obj;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Set Name Constructor" << std::endl;
	_name = name;
	return ;
}

  /*****************/
 /*  Destructors  */
/*****************/

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << _name << " attack " << target << " causing "
			  << _attackDamage << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " took " << amount << " damage and now has ";
	_hitpoints -= amount;

	if (_hitpoints < 0)
		_hitpoints = 0;

	std::cout << _hitpoints << std::endl;

	if (_hitpoints == 0) {
		std::cout << "ClapTrap " << _name << " has died!" << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " has been healed by " << amount << " and now has ";
	_hitpoints += amount;

	std::cout << _hitpoints << std::endl;
	return ;
}

std::string ClapTrap::getName() const {
	return _name;
}

int ClapTrap::getHitpoints() const {
	return _hitpoints;
}

int ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

ClapTrap & ClapTrap::operator=(ClapTrap const & obj) {
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return *this;
}

  /**********************************/
 /*  Operator Overloading Ostream  */
/**********************************/

std::ostream & operator<<(std::ostream & output, ClapTrap const & obj) {
	output << "Name: " << obj.getName() << std::endl;
	output << "Hitpoints: " << obj.getHitpoints() << std::endl;
	output << "Energy Points: " << obj.getEnergyPoints() << std::endl;
	output << "Attack Damage: " << obj.getAttackDamage() << std::endl;
	return output;
}

