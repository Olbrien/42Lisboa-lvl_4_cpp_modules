#include <iostream>
#include "phonebook.class.hpp"

phonebook::phonebook() {
    phonebook::_count;
}

void phonebook::setFirstName(std::string str) {
    this->_first_name = str;
}
void phonebook::setLastName(std::string str) {
    this->_last_name = str;
}
void phonebook::setNickname(std::string str) {
    this->_nickname = str;
}
void phonebook::setPhoneNumber(int phone) {
    this->_phone_number = phone;
}
void phonebook::setDarkestSecret(std::string str) {
    this->_darkest_secret = str;
}

int main() {
    std::string command;

    std::cout << "\nWelcome to the PhoneBook!\n" << std::endl;

    while(1) {
        std::cout << "Please insert a command:" << std::endl;
        std::cin >> command;
        if (command == "EXIT")
        {
            std::cout << "EXIT\n";
            break ;
        }
        else if (command == "ADD")
            std::cout << "ADD\n";        
        else if (command == "SEARCH")
            std::cout << "SEARCH\n";
        else {
            std::cout << "Invalid Command\n" << std::endl;
        }
    }
}


