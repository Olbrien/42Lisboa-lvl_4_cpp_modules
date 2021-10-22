#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();									// Canonical
		Fixed(int const num);
		Fixed(float const num);
		Fixed(Fixed const & obj);					// Canonical

		~Fixed();									// Canonical

		Fixed & operator=(Fixed const & obj);		// Canonical


		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;


		bool operator>(Fixed const & obj);


    private:
        int _fixedPoint;
		static const int _fractBits = 8;
};

std::ostream & operator<<(std::ostream & output, Fixed const & obj);

#endif
