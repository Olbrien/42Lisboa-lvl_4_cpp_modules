#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const & obj);

		~Dog();

		Dog & operator=(Dog const & obj);

		virtual void makeSound() const;

	private:
		Brain	*brain;

};

#endif
