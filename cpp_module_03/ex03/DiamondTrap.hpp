#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const & obj);
		DiamondTrap(std::string name);

		~DiamondTrap();

		DiamondTrap & operator=(DiamondTrap const & obj);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI();

		std::string getDiamondName() const;

	private:
		std::string		_name;
};

#endif
