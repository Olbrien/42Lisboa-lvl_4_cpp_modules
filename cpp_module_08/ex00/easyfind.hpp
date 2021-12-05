#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T & t, int x) {
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), x);

	if (it != t.end()) {
		std::cout << "FOUND IT = " << *it << std::endl;
		return (it);
	}
	else {
		throw x;
	}

}

#endif
