#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name ) {

	Zombie zombies(name);

	zombies.announce();

}
