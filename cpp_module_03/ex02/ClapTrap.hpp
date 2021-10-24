#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(ClapTrap const & obj);
		ClapTrap(std::string name);

		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & obj);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;
		int getHitpoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;

	protected:
		std::string		_name;
		int				_hitpoints;
		int				_energyPoints;
		int				_attackDamage;
};

std::ostream & operator<<(std::ostream & output, ClapTrap const & obj);

#endif
