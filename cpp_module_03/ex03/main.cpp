#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

	ClapTrap	C_1("Boris");
	ScavTrap	S_1("Jonah");
	FragTrap	F_1("Ferris");
	DiamondTrap	D_1("Chris");

	std::cout << std::endl;

	std::cout << C_1 << std::endl;
	std::cout << S_1 << std::endl;
	std::cout << F_1 << std::endl;

	std::cout << "Name: " << D_1.getDiamondName() << std::endl;
	std::cout << "Hitpoints: " << D_1.getHitpoints() << std::endl;
	std::cout << "Energy Points: " << D_1.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << D_1.getAttackDamage() << std::endl;

	S_1.guardGate();
	F_1.highFivesGuys();

	D_1.guardGate();
	D_1.highFivesGuys();
	D_1.whoAmI();

	std::cout << std::endl;

	C_1.attack(S_1.getName());
	S_1.attack(C_1.getName());
	F_1.attack(S_1.getName());
	D_1.attack(S_1.getName());

	std::cout << std::endl;

	C_1.takeDamage(10);
	S_1.takeDamage(10);
	F_1.takeDamage(10);
	D_1.takeDamage(10);

	std::cout << std::endl;

	C_1.beRepaired(10);
	S_1.beRepaired(10);
	F_1.beRepaired(10);
	D_1.beRepaired(10);

	std::cout << std::endl;

}
