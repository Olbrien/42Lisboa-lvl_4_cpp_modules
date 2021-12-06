#include "mutantstack.hpp"

  /******************/
 /*  Constructors  */
/******************/

template<class T>
mutantstack<T>::mutantstack() {
	return ;
}

template<class T>
mutantstack<T>::mutantstack(mutantstack const & obj) {
	*this = obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

template<class T>
mutantstack<T>::~mutantstack() {
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

template <class T>
typename mutantstack<T>::iterator	mutantstack<T>::begin() {
	return this->c.begin();
}

template <class T>
typename mutantstack<T>::iterator	mutantstack<T>::end() {
	return this->c.end();
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

template<class T>
mutantstack<T> & mutantstack<T>::operator=(mutantstack const & obj) {
	(void)obj;
	return *this;
}
