#include "main.hpp"

int main() {
	std::string command;

	phonebook phonebooks;

	std::cout << "\nWelcome to the PhoneBook!\n" << std::endl;

	while(1) {
		std::cout << "Please insert a command:" << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			std::cout << std::endl;
			phonebooks.AddContact();
		}
		else if (command == "SEARCH")
		{
			std::cout << std::endl;
			phonebooks.SearchContacts();
		}
		else {
			std::cout << std::endl;
			std::cout << "Invalid Command\n" << std::endl;
		}
	}
}
