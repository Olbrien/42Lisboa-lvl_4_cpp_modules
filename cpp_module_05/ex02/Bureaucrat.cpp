#include "Bureaucrat.hpp"

  /******************/
 /*  Constructors  */
/******************/

Bureaucrat::Bureaucrat() : _name("Nameless"), _grade(100) {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj) : _name(obj._name) {
	*this = obj;
	_grade = obj._grade;
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name){
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
	_grade = grade;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

Bureaucrat::~Bureaucrat() {
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

std::string const Bureaucrat::getName() {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::increaseGrade() {
	if (_grade <= 1) {
		throw GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::decreaseGrade() {
	if (_grade >= 150) {
		throw GradeTooLowException();
	}
	_grade++;
}

void Bureaucrat::signForm(Form & form) {
	form.beSigned(*this);
	if (form.getSigned() == 1) {
		std::cout << getName() << " signs " << form.getName() << std::endl;
	}
	else {
		std::cout << getName() << " cannot sign " << form.getName()
				  << " because grade too low " << std::endl;
	}
}

void Bureaucrat::executeForm(Form &form) const {
	try
	{
		form.execute(*this);
		std::cout << "<" << _name << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "<" << _name << "> cannot execute <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
	}
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj) {
	(void)obj;
	return *this;
}

  /**********************************/
 /*  Operator Overloading Ostream  */
/**********************************/

std::ostream & operator<<(std::ostream & output, Bureaucrat & obj) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return output;
}
