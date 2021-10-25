#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() {
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
		std::cout << std::endl;
	}
	{
		const WrongAnimal* w_c = new WrongCat();
		std::cout << std::endl;

		std::cout << w_c->getType() << " " << std::endl;
		std::cout << std::endl;

		w_c->makeSound();
		std::cout << std::endl;

		delete w_c;
	}
}
