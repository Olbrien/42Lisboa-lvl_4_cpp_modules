#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() {

	Zombie* zombies = newZombie("Alaaaa");
	zombies->announce();

	randomChump("ZOMBIEEEE");

	delete zombies;

}
