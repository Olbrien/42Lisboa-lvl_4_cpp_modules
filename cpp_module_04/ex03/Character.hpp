#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(); //
		Character(std::string const & name); 
		Character(Character const & obj); //
		~Character(); //
		Character & operator=(Character const & obj); //

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string		_name;
		AMateria*		_materias[4];

};

#endif
