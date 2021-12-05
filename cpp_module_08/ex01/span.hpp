#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

typedef std::vector<int>::iterator it;

class span {
	public:
		span();									//
		span(unsigned int N);
		span(span const & obj);					//
		~span();								//

		span & operator=(span const & obj);		//

		void addNumber(int numba);
		void addNumber(it start, it end);
		long shortestSpan();
		long longestSpan();

		class MaxReached : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Exception error: Can't add more numbers. Size is at it's limit!";
				}
		};

		class NoSpan : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Exception error: There is no Span to find!";
				}
		};

		class NoSpace : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Exception error: No Space to add all those values!";
				}
		};

		void printNumbers();

	private:
		unsigned int		_max;
		std::vector<int>	_vector;
};

#endif
