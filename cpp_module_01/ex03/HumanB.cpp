#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->_weapon = &weapon;
	return;
}

void	HumanB::attack() {

	if (this->_weapon == NULL)
		return ;

	std::cout << this->_name << " attacks with his " << _weapon->getType() << std::endl;
	return ;
}
