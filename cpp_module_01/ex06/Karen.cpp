#include "Karen.hpp"

void Karen::complain(std::string level) {
    
    void (Karen::*casePtr[])() = {&Karen::randomGibberish, &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    int num = 0;

    (!level.compare("DEBUG")) && (num = 1);
    (!level.compare("INFO")) && (num = 2);
    (!level.compare("WARNING")) && (num = 3);
    (!level.compare("ERROR")) && (num = 4);

    (this->*casePtr[num])();

}

void Karen::debug(void) {
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
    return ;
}

void Karen::info(void) {
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    return ;
}

void Karen::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month!" << std::endl;
    return ;
}

void Karen::error(void) {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}

void Karen::randomGibberish(void) {
    std::cout << "Probably complaining about insignificant problems." << std::endl;
    return ;
}