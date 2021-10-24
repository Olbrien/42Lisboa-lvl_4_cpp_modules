#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(FragTrap const & obj);
		FragTrap(std::string name);

		~FragTrap();

		FragTrap & operator=(FragTrap const & obj);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys(void);

	private:

};

#endif
