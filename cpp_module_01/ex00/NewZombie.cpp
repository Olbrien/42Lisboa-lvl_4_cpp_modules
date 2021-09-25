#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {

	Zombie *zombies = new Zombie(name);

	return (zombies);
}
