#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat const & obj);

		~WrongCat();

		WrongCat & operator=(WrongCat const & obj);

		void makeSound() const;

	private:

};

#endif
