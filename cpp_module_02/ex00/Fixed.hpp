#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed();									// Canonical
		Fixed(Fixed const & obj);					// Canonical

		~Fixed();									// Canonical

		Fixed & operator=(Fixed const & obj);		// Canonical


		int		getRawBits( void ) const;
		void	setRawBits( int const raw );


    private:
        int _fixedPoint;
		static const int _fractBits = 8;
};

#endif
