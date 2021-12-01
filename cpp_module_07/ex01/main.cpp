#include <iostream>
#include "iter.hpp"

int main() {
	{
		int *array = new int[2];
		array[0] = 0;
		array[1] = 1;

		iter(array, 2, printArray);

		delete[] array;

		std::cout << std::endl;
	}
	{
		char const *array[2] = {"Blue", "Red"};
		iter(array, 2, printArray);

		std::cout << std::endl;
	}
	{
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];
		iter(tab, 5, print);
		iter(tab2, 5, print);
	}

}
