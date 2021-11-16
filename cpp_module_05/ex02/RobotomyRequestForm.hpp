#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm();                                         //
        RobotomyRequestForm(std::string target);                                         //
        RobotomyRequestForm(RobotomyRequestForm & obj);              //
        ~RobotomyRequestForm();                                        //
        RobotomyRequestForm & operator=(RobotomyRequestForm & obj);  //

        virtual void action(void) const;

    private:
        std::string     _target;
};


#endif