#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) {
	this->_zombieName = zombieName;
}

Zombie::~Zombie() {
	std::cout << "<" << this->_zombieName << "> *dies*" << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << this->_zombieName << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
