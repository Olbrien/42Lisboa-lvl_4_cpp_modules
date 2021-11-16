#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		ShrubberyCreationForm teste1("Shruberry");
		RobotomyRequestForm teste2("Robotomy");
		PresidentialPardonForm teste3("Presidente");
		Bureaucrat buro("Wronga", 148);
		Bureaucrat bura("Gooda", 110);
		Bureaucrat buri("Truda", 10);
		Bureaucrat burx("Aloa", 10);

		std::cout << teste1 << std::endl;
		try {
			buro.signForm(teste1);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		std::cout << std::endl;

		try {
			bura.signForm(teste1);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}		

		bura.executeForm(teste1);
		buri.executeForm(teste2);

		buri.signForm(teste2);
		buri.executeForm(teste2);

		burx.signForm(teste3);
		burx.executeForm(teste3);
	}
}
