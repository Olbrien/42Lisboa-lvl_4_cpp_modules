#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	/*{
		try {
			Bureaucrat buro("Relex", 0);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		try {
			Bureaucrat buro("Relex", 151);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		std::cout << std::endl;
	}
	{
		try {
			Bureaucrat buro("Relex", 1);
			buro.increaseGrade();
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		try {
			Bureaucrat buro("Relex", 150);
			buro.decreaseGrade();
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		std::cout << std::endl;
	}
	{
		Bureaucrat buro("Relex", 115);
		Bureaucrat bura("Relax", 1);

		std::cout << buro;
		std::cout << bura;
	}*/

	{
		Form papel("Student Council", true, 10, 100);

		std::cout << papel;
	}
}
