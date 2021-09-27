#include <iostream>

void replace(std::string filename, std::string s1, std::string s2);

int main() {

	std::string		filename;
	std::string		s1;
	std::string		s2;

	while (filename.empty()) {
		std::cout << "Please insert the filename: ";
		std::getline(std::cin, filename);
	}
	while (s1.empty()) {
		std::cout << "Please insert the string which will be replaced: ";
		std::getline(std::cin, s1);
	}
	while (s2.empty()) {
		std::cout << "Please insert the string to replace: ";
		std::getline(std::cin, s2);
	}

	replace(filename, s1, s2);
}
