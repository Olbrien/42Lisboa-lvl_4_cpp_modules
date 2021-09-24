#include "main.hpp"

bool isStringDigit(std::string line) {

    bool numb = true;

    for (int i = 0; line[i] != '\0' ; i++)
    {
        if (!std::isdigit(line[i])) {
            numb = false;
        }
    }
   
    return numb;
}

std::string returnUserInput() {

    std::string line;

    while (line.empty())
        std::getline(std::cin, line);

    return (line);
}