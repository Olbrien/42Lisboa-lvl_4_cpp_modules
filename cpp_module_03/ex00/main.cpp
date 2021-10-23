#include "ClapTrap.hpp"

int main() {
	{
		ClapTrap a("Bixo");
		ClapTrap b(a);
		ClapTrap c;

		c = a;

		std::cout << std::endl;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	{
		std::cout << std::endl;

		ClapTrap a("Noob_A-1");
		ClapTrap b("Noob_A-2");

		std::cout << a << std::endl;
		std::cout << b << std::endl;

		a.attack(b.getName());
		a.takeDamage(5);
		a.beRepaired(10);

		std::cout << std::endl;
	}
}
