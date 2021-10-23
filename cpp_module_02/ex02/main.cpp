#include <iostream>

#include "Fixed.hpp"


int main() {
	Fixed a(5);
	Fixed b(10);
	Fixed c(10);

	{
		if (b > a)
			std::cout << b << " is bigger than " << a << std::endl;
		if (a < b)
			std::cout << a << " is smaller than " << b << std::endl;
		if (c >= b)
			std::cout << c << " is bigger or equal to " << b << std::endl;
		if (a <= b)
			std::cout << a << " is smaller or equal to " << b << std::endl;
		if (b == c)
			std::cout << b << " is equal to " << c << std::endl;
		if (a != b)
			std::cout << a << " is different than " << b << std::endl;
	}
	{
		std::cout << b << " + " << c << " = ";
		b = b + c;
		std::cout << b << std::endl;

		std::cout << b << " - " << c << " = ";
		b = b - c;
		std::cout << b << std::endl;

		std::cout << b << " * " << c << " = ";
		b = b * c;
		std::cout << b << std::endl;

		std::cout << b << " / " << c << " = ";
		b = b / c;
		std::cout << b << std::endl;
	}
	{
		a.setRawBits(0);

		std::cout << "a = " << a << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;

		b.setRawBits(0);

		std::cout << "b = " << b << std::endl;
		std::cout << "--b = " << --b << std::endl;
		std::cout << "b-- = " << b-- << std::endl;
		std::cout << "b = " << b << std::endl;
	}
	{
		Fixed c(10);
		Fixed d(20);

		std::cout << "c = " << c << std::endl;
		std::cout << "d = " << d << std::endl;

		std::cout << "min between c and d is " << c.min(c, d) << std::endl;
		std::cout << "max between c and d is " << c.max(c, d) << std::endl;

	}
}
