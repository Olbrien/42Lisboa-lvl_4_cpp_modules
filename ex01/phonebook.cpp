#include <iostream>
#include "phonebook.hpp"

void phonebook::setFirstName(std::string str) {
    first_name = str;
}
void phonebook::setLastName(std::string str) {
    last_name = str;
}
void phonebook::setNickname(std::string str) {
    nickname = str;
}
void phonebook::setPhoneNumber(int phone) {
    phone_number = phone;
}
void phonebook::setDarkestSecret(std::string str) {
    darkest_secret = str;
}

int main() {
    std::string command;

    while(1) {
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

    }
}


