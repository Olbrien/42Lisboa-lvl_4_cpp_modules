#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	{
		Form papel("Student Council", true, 10, 100);
		std::cout << papel;

		std::cout << std::endl;

		try {
			Form papel2("Student Council", false, 188, 100);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		try {
			Form papel3("Student Council", true, 42, -1);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		Form papel("Student Council", false, 10, 100);

		Bureaucrat buro("Wronga", 11);
		Bureaucrat bura("Relex", 5);

		try {
			papel.beSigned(buro);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}
		std::cout << std::endl;

		try {
			papel.beSigned(bura);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		std::cout << papel;
	}
}
