#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm();                                         //
        PresidentialPardonForm(std::string target);                       //
        PresidentialPardonForm(PresidentialPardonForm & obj);              //
        ~PresidentialPardonForm();                                        //
        PresidentialPardonForm & operator=(PresidentialPardonForm & obj);  //

        virtual void action(void) const;

    private:
        std::string     _target;
};


#endif