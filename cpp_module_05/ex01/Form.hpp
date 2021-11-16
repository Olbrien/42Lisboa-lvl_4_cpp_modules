#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form();                                                     //
        Form(std::string const name, bool isSigned, int const gradeToSign, int const gradeToExecute);
        Form(Form const & obj);                                     //
        ~Form();                                                    //
        Form & operator=(Form const & obj);                         //


        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw() {
                return "Grade Too High Exception";
            }
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw() {
                return "Grade Too Low Exception";
            }
        };

        std::string const   getName();
        bool                getSigned();
        int                 getGradeToSign();
        int                 getGradeToExecute();

		void				beSigned(Bureaucrat & buro);

    private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeToSign;
        int const           _gradeToExecute;
};

std::ostream & operator<<(std::ostream & output, Form & obj);

#endif
