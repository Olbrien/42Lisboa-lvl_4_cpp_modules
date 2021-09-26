#include "Weapon.hpp"

Weapon::Weapon(std::string weaponName) : _weaponName(weaponName) {

	return ;
}

void			Weapon::setType(std::string weaponName) {

	this->_weaponName = weaponName;

	return ;
}

std::string const	Weapon::getType() {

	std::string const &	weaponName = this->_weaponName;

	return (weaponName);
}
