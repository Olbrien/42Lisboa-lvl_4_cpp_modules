#include "ScavTrap.hpp"

  /******************/
 /*  Constructors  */
/******************/

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default Constructor" << std::endl;
	_name = "Empty";
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Set Name Constructor" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

  /*****************/
 /*  Destructors  */
/*****************/

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
	return;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << _name << " attack " << target << " causing "
			  << _attackDamage << " points of damage!" << std::endl;
	return ;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << _name << " took " << amount << " damage and now has ";
	_hitpoints -= amount;

	if (_hitpoints < 0)
		_hitpoints = 0;

	std::cout << _hitpoints << std::endl;

	if (_hitpoints == 0) {
		std::cout << "ScavTrap " << _name << " has died!" << std::endl;
	}
	return ;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << _name << " has been healed by " << amount << " and now has ";
	_hitpoints += amount;

	std::cout << _hitpoints << std::endl;
	return ;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " has entered in Gate Keeper Mode" << std::endl;
	return ;
}
