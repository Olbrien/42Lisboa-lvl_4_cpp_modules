#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(ScavTrap const & obj);
		ScavTrap(std::string name);

		~ScavTrap();

		ScavTrap & operator=(ScavTrap const & obj);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();

	private:
};

#endif
