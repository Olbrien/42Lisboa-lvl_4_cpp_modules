#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & obj);

		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & obj);

		std::string getType() const;
		void makeSound() const;

	protected:
		std::string		type;
};

#endif
