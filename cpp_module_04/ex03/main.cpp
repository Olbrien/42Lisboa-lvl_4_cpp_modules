#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main() {
	{
		AMateria *cure = new Cure("cure");
		AMateria *ice = new Ice("ice");
		std::cout << cure->getType() << std::endl;
		std::cout << ice->getType() << std::endl;

		std::cout << std::endl;

		AMateria *cloned_cure;
		AMateria *cloned_ice;
		cloned_cure = cure->clone();
		cloned_ice = ice->clone();

		std::cout << cloned_cure->getType() << std::endl;
		std::cout << cloned_ice->getType() << std::endl;

		delete cloned_cure;	// Without virtual ~AMateria this wouldn't be possible
		delete cloned_ice;	// Without virtual ~AMateria this wouldn't be possible
		delete cure;	// Without virtual ~AMateria this wouldn't be possible
		delete ice;	// Without virtual ~AMateria this wouldn't be possible

	}



}
