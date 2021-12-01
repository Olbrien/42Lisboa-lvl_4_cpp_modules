#include <iostream>
#include "whatever.hpp"

int main() {
	{
		int	x = 5;
		int y = 10;

		std::cout << "x = " << x << "  | y = " << y << std::endl;
		swap<int>(x, y);
		std::cout << "x = " << x << " | y = " << y << std::endl;

		float a = 5555.192;
		float b = 121.9898;

		std::cout << "a = " << a << "  | b = " << b << std::endl;
		swap<float>(a, b);
		std::cout << "a = " << a << "   | b = " << b << std::endl;

		char c = 'a';
		char d = 'b';

		std::cout << "c = " << c << " | d = " << d << std::endl;
		swap<>(c, d);
		std::cout << "c = " << c << " | d = " << d << std::endl;

		std::cout << std::endl;
	}
	{
		int	x = 10;
		int y = 9;

		std::cout << "max = " << max<int>(x, y) << " | min = " << min<int>(x, y) << std::endl;

		float a = 14;
		float b = 15;

		std::cout << "max = " << max<float>(a, b) << " | min = " << min<float>(a, b) << std::endl;

		std::cout << std::endl;
	}
	{
		Awesome a(2), b(4);
		swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;

		std::cout << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		swap( a, b );

		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		swap(c,	d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

}
