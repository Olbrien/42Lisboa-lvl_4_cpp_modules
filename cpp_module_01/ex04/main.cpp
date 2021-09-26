#include <iostream>

void replace(std::string filename, std::string s1, std::string s2);

int main() {

	std::string		filename;
	std::string		s1;
	std::string		s2;

	while (filename.empty())
		std::getline(std::cin, filename);
	while (s1.empty())
		std::getline(std::cin, s1);
	while (s2.empty())
		std::getline(std::cin, s2);

	replace(filename, s1, s2);

	/*std::cout << filename << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;*/


}
