#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

	public:
		Weapon(std::string weaponName);

		void				setType(std::string weaponName);
		std::string	const	getType();

	private:
		std::string			_weaponName;

};

#endif
