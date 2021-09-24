#include "main.hpp"

int phonebook::_count = -1;

void phonebook::AddContact() {

    phonebook::_count++;

    if (_count > 7)
    {
        for (int i = 0; i < 7; i++)
            contacts[i] = contacts[i + 1];

        phonebook::_count = 7;
    }

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
}

void phonebook::SearchContacts() {

    if (contacts[0].getFirstName().size() == 0) {
        std::cout << "Please ADD contacts first before SEARCH" << std::endl;
        return ;
    }

    std::cout << "|     Index| FirstName|  LastName|  Nickname|" << std::endl;

    for (int x = 0; x < 8; x++) {

        if (contacts[x].getFirstName().size() != 0) {
           
            std::cout << "|" << std::setw(10) << x;

            contacts[x].getFirstName().size() > 10 ? std::cout << "|" << std::setw(9) << contacts[x].getFirstName().substr(0,9) << "." :
                                                     std::cout << "|" << std::setw(10) << contacts[x].getFirstName().substr(0,10);

            contacts[x].getLastName().size() > 10 ? std::cout << "|" << std::setw(9) << contacts[x].getLastName().substr(0,9) << "." :
                                                    std::cout << "|" << std::setw(10) << contacts[x].getLastName().substr(0,10);

            contacts[x].getNickname().size() > 10 ? std::cout << "|" << std::setw(9) << contacts[x].getNickname().substr(0,9) << ".|" << std::endl :
                                                    std::cout << "|" << std::setw(10) << contacts[x].getNickname().substr(0,10) << "|" << std::endl;
        }
    }

    std::cout << "\nPlease insert the Index of a contact you want to see: ";

	std::string line;
	std::getline(std::cin, line);
    int index = -1;

    if (isStringDigit(line) == true) {
        std::stringstream ss(line);
        ss >> index;
    }	

    if (index >= 0 && index <= 7) {
        if (contacts[index].getFirstName().size() != 0) {
            std::cout << std::endl;
            std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
            std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
            std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
            std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
        }
    }
    
}