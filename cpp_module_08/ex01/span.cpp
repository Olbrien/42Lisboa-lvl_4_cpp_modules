#include "span.hpp"

  /******************/
 /*  Constructors  */
/******************/

span::span() : _max(0) {
	return ;
}

span::span(unsigned int N) : _max(N) {
	return ;
}

span::span(span const & obj) {
	*this = obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

span::~span() {
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void span::addNumber(int numba) {
	if (_vector.size() < _max) {
		_vector.push_back(numba);
	}
	else {
		throw MaxReached();
	}
	return ;
}

void span::addNumber(it begin, it end) {
	if ((_vector.size() + std::distance(begin, end)) <= _max) {
		_vector.insert(_vector.end(), begin, end);
	}
	else {
		throw NoSpace();
	}

}

long span::shortestSpan() {
	if (_vector.size() <= 1) {
		throw NoSpan();
	}

	std::sort(_vector.begin(), _vector.end());

	std::vector<int>::iterator it;
	it = _vector.begin();

	int i = 0;
	long shortest = (static_cast<long>(this->_vector[1]) - static_cast<long>(this->_vector[0]));

	while(it != _vector.end() - 1) {
		if ( (static_cast<long>(this->_vector[i + 1]) - static_cast<long>(this->_vector[i])) < shortest) {
			shortest = ( static_cast<long>(this->_vector[i + 1]) - static_cast<long>(this->_vector[i]));
		}
		i++;
		it++;
	}
	return (shortest);
}

long span::longestSpan() {
	if (_vector.size() <= 1) {
		throw NoSpan();
	}

	long min = *std::min_element(_vector.begin(), _vector.end());
	long max = *std::max_element(_vector.begin(), _vector.end());
	long longest = max - min;

	return (longest);
}

void span::printNumbers() {
	std::vector<int>::iterator it;

	it = _vector.begin();

	std::cout << "{ ";
	while(it != _vector.end()) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << "}" << std::endl;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

span & span::operator=(span const & obj) {
	(void)obj;
	return *this;
}
