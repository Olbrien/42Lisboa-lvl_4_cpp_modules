#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap C_1("Boris");
	ScavTrap S_1("Jonah");
	FragTrap F_1("Ferris");

	std::cout << std::endl;

	std::cout << C_1 << std::endl;
	std::cout << S_1 << std::endl;
	std::cout << F_1 << std::endl;

	S_1.guardGate();
	F_1.highFivesGuys();

	std::cout << std::endl;

	C_1.attack(S_1.getName());
	S_1.attack(C_1.getName());
	F_1.attack(S_1.getName());

	std::cout << std::endl;

	C_1.takeDamage(10);
	S_1.takeDamage(10);
	F_1.takeDamage(10);

	std::cout << std::endl;

	C_1.beRepaired(10);
	S_1.beRepaired(10);
	F_1.beRepaired(10);

	std::cout << std::endl;
}
