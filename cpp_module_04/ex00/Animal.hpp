#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(Animal const & obj);

		virtual ~Animal();

		Animal & operator=(Animal const & obj);

		std::string getType() const;
		virtual void makeSound() const;

	protected:
		std::string		type;
};

#endif
