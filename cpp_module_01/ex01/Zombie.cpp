#include "Zombie.hpp"

Zombie::Zombie() {

	return ;
}

Zombie::Zombie(std::string zombieName) : _zombieName(zombieName){

	return ;
}

Zombie::~Zombie() {

	std::cout << "<" << this->_zombieName << "> *dies*" << std::endl;
	return ;
}

void Zombie::announce() {

	std::cout << "<" << this->_zombieName << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::setZombieName(std::string zombieName){

	this->_zombieName = zombieName;
	return ;
}
