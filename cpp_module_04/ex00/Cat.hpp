#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const & obj);

		~Cat();

		Cat & operator=(Cat const & obj);

		virtual void makeSound() const;

	private:

};

#endif
