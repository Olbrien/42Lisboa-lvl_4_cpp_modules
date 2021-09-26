#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {

	return ;
}

void	HumanA::attack() {

	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
	return ;
}
