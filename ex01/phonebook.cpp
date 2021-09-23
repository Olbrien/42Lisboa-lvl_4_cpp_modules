#include "phonebook.class.hpp"

int phonebook::_count = 0;

phonebook::phonebook() {    
}

phonebook::~phonebook() {
    std::cout << this->_count;
}

std::string returnUserInput() {

    std::string line;
    std::getline(std::cin, line);

    return (line);    
}

void phonebook::AddContact(contact *contacts) {

    phonebook::_count++;

    std::cout << this->_count;

    std::cout << "Please insert your First Name: ";
    contacts[this->_count].setFirstName(returnUserInput());
    std::cout << "Please insert your Last Name: ";
    contacts[this->_count].setLastName(returnUserInput());
    std::cout << "Please insert your Nickname Name: ";
    contacts[this->_count].setNickname(returnUserInput());
    std::cout << "Please insert your Phone Number Name: ";
    contacts[this->_count].setPhoneNumber(returnUserInput());
    std::cout << "Please insert your Darkest Secret: ";
    contacts[this->_count].setDarkestSecret(returnUserInput());

    std::cout << contacts[this->_count].getFirstName() << std::endl;
    std::cout << contacts[this->_count].getLastName() << std::endl;
    std::cout << contacts[this->_count].getNickname() << std::endl;
    std::cout << contacts[this->_count].getPhoneNumber() << std::endl;
    std::cout << contacts[this->_count].getDarkestSecret() << std::endl;
}