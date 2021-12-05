#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include "span.hpp"

int main() {
	span s(5);

	try {
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		s.addNumber(4);
		s.addNumber(5);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	s.printNumbers();

	try {
		s.addNumber(6);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	s.printNumbers();

	std::cout << "Shortest Span = " << s.shortestSpan() << std::endl;
	std::cout << "Longest Span = " << s.longestSpan() << std::endl;


	span a(1);
	a.addNumber(5);
	try {
		a.shortestSpan();
		a.longestSpan();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	{
		span x(10000);

		std::srand(unsigned(std::time(NULL)));
		std::vector<int> v(10000);
		std::generate(v.begin(), v.end(), std::rand);

		x.addNumber(v.begin(), v.end());
		x.printNumbers();
	}

	{
		span x(50);

		std::srand(unsigned(std::time(NULL)));
		std::vector<int> v(51);
		std::generate(v.begin(), v.end(), std::rand);

		try {
			x.addNumber(v.begin(), v.end());
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}


}
