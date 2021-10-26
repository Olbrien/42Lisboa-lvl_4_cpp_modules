#include "Brain.hpp"

  /******************/
 /*  Constructors  */
/******************/

Brain::Brain() {
    std::cout << "Brain has been Constructed" << std::endl;
    return ;
}

Brain::Brain(Brain const & obj) {
    *this = obj;
    return ;
}

  /****************/
 /*  Destructor  */
/****************/

Brain::~Brain() {
    std::cout << "Brain has been Destroyed" << std::endl;
    return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Brain & Brain::operator=(Brain const & obj) {
    (void)obj;
    return *this;
}