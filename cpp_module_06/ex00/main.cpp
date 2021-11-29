#include <iostream>
#include "ScalarConv.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Please insert one argument." << std::endl;
		return (1);
	}
	if (argv[1][0] == '\0') {
		std::cout << "Please insert a non-null argument." << std::endl;
		return (1);
	}

	ScalarConv converter(argv[1]);

	converter.convertToChar();
	converter.convertToInt();
	converter.convertToFloat();
	converter.convertToDouble();
}
