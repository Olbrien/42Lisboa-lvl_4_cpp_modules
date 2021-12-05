#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> vect;

	vect.push_back(0);
	vect.push_back(2);
	vect.push_back(4);
	vect.push_back(6);
	vect.push_back(8);

	std::vector<int>::iterator it;

	try {
		it = easyfind(vect, 2);
		std::cout << *it << std::endl;

		it = easyfind(vect, 3);
		std::cout << *it << std::endl;
	}
	catch (int error) {
		std::cout << "Exception error: Value " << error << " was not found." << std::endl;
	}


}
