#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat();										//
		Bureaucrat(Bureaucrat const & obj);					//
		Bureaucrat(std::string const & name, int grade);
		~Bureaucrat();										//
		Bureaucrat & operator=(Bureaucrat const & obj);		//

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade Too High Exception";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade Too Low Exception";
				}
		};

		std::string const getName();
		int getGrade();

		void increaseGrade();
		void decreaseGrade();

		void signForm(Form & form);


	private:
		std::string	const		_name;
		int						_grade;


};

std::ostream & operator<<(std::ostream & output, Bureaucrat & obj);

#endif
