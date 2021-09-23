#include "main.hpp"

int main() {
    std::string command;

	phonebook phonebooks;
    contact contacts[8];

    std::cout << "\nWelcome to the PhoneBook!\n" << std::endl;

    while(1) {
        std::cout << "Please insert a command:" << std::endl;
        std::getline(std::cin, command);
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
            phonebooks.AddContact(contacts);            
        else if (command == "SEARCH")
            phonebooks.SearchContacts(contacts);  
        else {
            std::cout << "Invalid Command\n" << std::endl;
        }
    }
}