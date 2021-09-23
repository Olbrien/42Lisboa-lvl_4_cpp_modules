#include "phonebook.class.hpp"

int phonebook::_count = -1;

phonebook::phonebook() {
}

phonebook::~phonebook() {
    std::cout << this->_count;
}

std::string returnUserInput() {

    std::string line;

    while (line.empty())
        std::getline(std::cin, line);

    return (line);
}

void phonebook::AddContact() {

    phonebook::_count++;

    std::cout << this->_count << std::endl;

    if (_count >= 7)
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

	std::string line;
	std::getline(std::cin, line);

	while (line.begin)

	std::cout << index << std::endl;

    if (index >= 0 && index <= 7)
    {
        std::cout << "WHERREr\n";
    }
}
