#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstring>
#include <exception>

template <class T>
class Array {
	public:
		Array<T>() : _array(0), _size(0) {} ;

		Array<T>(unsigned int n) {
			_array = new T[n];
			_size = n;
			std::memset(_array, 0, sizeof(T) * n);
		}

		Array<T>(Array<T> const & obj) : _array(0), _size(0) {
			*this = obj;
		};

		~Array<T>() { delete[] _array; };

		Array<T> & operator=( Array<T> const & obj ) {
			if (this == &obj) {
				return *this;
			}
			delete[] _array;

			_size = obj._size;
			_array = new T[_size];

			for (int i = 0; i < (int)_size; i++)
				_array[i] = obj._array[i];

			return *this;
		};

		T & operator[](int i) {
			if (i >= _size || i < 0)
				throw std::exception();
			return _array[i];
		}
		int size(void) { return _size; } ;

	private:
		T	*_array;
		int	_size;
};

#endif
