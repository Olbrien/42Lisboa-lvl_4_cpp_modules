#ifndef SCALARCONV_HPP
# define SCALARCONV_HPP

#include <iostream>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

enum ErrorHandling {
	e_ok = 0,

	e_minusInf,
	e_plusInf,
	e_nan,

	e_impossible,
	e_nonDisplayable,

	e_invalidArgument
};

class ScalarConv {
	public:
		ScalarConv();									//
		ScalarConv(char *str);
		ScalarConv(ScalarConv & obj);					//
		~ScalarConv();									//

		ScalarConv & operator=(ScalarConv & obj);		//

		void convertToChar();
		void convertToInt();
		void convertToFloat();
		void convertToDouble();

	private:
		std::string		_str;
		double			_generalValue;
		int				_generalValueStatus;

};

#endif
