#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() {
	int				sizeOfArray = 4;
	const Animal*	animals[sizeOfArray];

	for (int i = 0; i < sizeOfArray; i++) {
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < sizeOfArray; i++) {
		delete animals[i];
	}

	std::cout << std::endl;

	{
		Dog basic;
		Dog copy(basic);
	}

	std::cout << std::endl;

	{
		//Animal	animal;
		Cat			gato;
		Dog			cao;

		gato.makeSound();
		cao.makeSound();
	}
}
