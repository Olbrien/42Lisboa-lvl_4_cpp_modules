#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <stack>

template<class T>
class mutantstack : public std::stack<T> {
	public:
		mutantstack();										//
		mutantstack(mutantstack const & obj);				//
		~mutantstack();										//

		mutantstack & operator=(mutantstack const & obj);	//

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin();
		iterator	end();
	private:

};



#endif
