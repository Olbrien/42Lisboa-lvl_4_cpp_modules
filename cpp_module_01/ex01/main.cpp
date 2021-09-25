#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {

	int N = 5;

	Zombie* zombies = zombieHorde(N, "Zombie Jesus");

	for (int i = 0; i < N; i++){
		zombies[i].announce();
	}

	delete[] zombies;

}
