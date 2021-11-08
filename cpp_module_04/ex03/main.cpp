#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

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

		std::cout << std::endl;
	}
		
	{
		ICharacter *olbrieno = new Character("Olbrieno");
		ICharacter *olbriena = new Character("Olbriena");

		AMateria *cure1 = new Cure("cure1");
		AMateria *ice1 = new Ice("ice1");
		AMateria *cure2 = new Cure("cure2");
		AMateria *ice2 = new Ice("ice2");

		std::cout << olbrieno->getName() << std::endl; 
		std::cout << olbriena->getName() << std::endl; 

		olbrieno->equip(cure1);
		olbrieno->equip(ice1);
		olbrieno->equip(cure2);
		olbrieno->equip(ice2);
		olbrieno->use(0, *olbriena);
		olbrieno->use(1, *olbriena);
		olbrieno->use(2, *olbriena);
		olbrieno->use(3, *olbriena);

		olbrieno->unequip(3);
		olbrieno->use(3, *olbriena);

		olbriena = olbrieno;

		olbriena->use(2, *olbrieno);
	}

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		return 0;
	}

}
