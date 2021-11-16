#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form{
    public:
        ShrubberyCreationForm();                                         //
        ShrubberyCreationForm(std::string target);                                         //
        ShrubberyCreationForm(ShrubberyCreationForm & obj);              //
        ~ShrubberyCreationForm();                                        //
        ShrubberyCreationForm & operator=(ShrubberyCreationForm & obj);  //

        virtual void action(void) const;

    private:
        std::string     _target;
};

#endif