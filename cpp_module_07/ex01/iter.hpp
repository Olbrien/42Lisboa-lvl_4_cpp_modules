#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *array, int len, void (*f)(T &)) {
	for (int i = 0; i < len; i++)
		(*f)(array[i]);
}

template <typename T>
void printArray(T & number) {
	std::cout << number << std::endl;
}

class Awesome {
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T & x ) { std::cout << x << std::endl; return; }

#endif
