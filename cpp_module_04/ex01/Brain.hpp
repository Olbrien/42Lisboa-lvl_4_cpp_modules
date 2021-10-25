#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    public:
        Brain();
        Brain(Brain const & obj);

        ~Brain();

        Brain & operator=(Brain const & obj);

        std::string    ideas[100]; 

    private:

};

#endif