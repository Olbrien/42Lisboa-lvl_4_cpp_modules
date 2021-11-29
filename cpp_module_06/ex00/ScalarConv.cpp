#include "ScalarConv.hpp"

  /******************/
 /*  Constructors  */
/******************/

ScalarConv::ScalarConv() {
	return ;
};

ScalarConv::ScalarConv(char *str) {
	_str = static_cast<std::string>(str);

	// Check Special Cases (nan, nanf, +inf, +inff, -inf, -inff)
	if (_str == "nan" || _str == "nanf") {
		_generalValueStatus = e_nan;
		_generalValue = 0;
		return ;
	}
	else if (_str == "+inf" || _str == "+inff") {
		_generalValueStatus = e_plusInf;
		_generalValue = 0;
		return ;
	}
	else if (_str == "-inf" || _str == "-inff") {
		_generalValueStatus = e_minusInf;
		_generalValue = 0;
		return ;
	}

	// Check one character cases like ("1", "x", "-", " ")
	if (_str.length() == 1) {
		_generalValueStatus = e_ok;
		_generalValue = static_cast<double>(*(_str.c_str()));
		if (_generalValue >= 48 && _generalValue <= 57) {
			_generalValue -= 48;
		}
		return ;
	}

	char	*ptr;
	double	converted = strtod(str, &ptr);

	// Check if input is valid or if it finishes with an "f"
	if (*ptr == '\0' || strcmp(ptr, "f") == 0) {
		_generalValueStatus = e_ok;
		_generalValue = converted;
		return ;
	}

	// If all else fails, you have an invalid argument.
	_generalValueStatus = e_invalidArgument;
	_generalValue = 0;
	return ;
}

ScalarConv::ScalarConv(ScalarConv & obj) {
	(void)obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

ScalarConv::~ScalarConv() {
	return ;
};

  /**********************/
 /*  Member Functions  */
/**********************/

void ScalarConv::convertToChar() {
	if (_generalValueStatus != e_ok) {
		if (_generalValueStatus == e_invalidArgument)
			std::cout << "char: invalid argument" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	else {
		char converted = static_cast<char>(_generalValue);

		if (converted < 0) {
			std::cout << "char: " << "impossible" << std::endl;
			return ;
		}

		if (isprint(converted)) {
			std::cout << "char: " << converted << std::endl;
		}
		else {
			std::cout << "char: " << "Non displayable" << std::endl;
		}

	}
	return ;
}

void ScalarConv::convertToInt() {
	if (_generalValueStatus != e_ok) {
		if (_generalValueStatus == e_invalidArgument)
			std::cout << "int: invalid argument" << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	else {
		int converted = static_cast<int>(_generalValue);
		std::cout << "int: " << converted << std::endl;
	}
	return ;
}

void ScalarConv::convertToFloat() {
	if (_generalValueStatus != e_ok) {
		switch (_generalValueStatus) {
			case e_minusInf:
				std::cout << "float: -inff" << std::endl;
				break;
			case e_plusInf:
				std::cout << "float: +inff" << std::endl;
				break;
			case e_nan:
				std::cout << "float: nanf" << std::endl;
				break;
			case e_invalidArgument:
				std::cout << "float: invalid argument" << std::endl;
				break;
		}
	}
	else {
		float converted = static_cast<float>(_generalValue);
		std::cout << "float: " << converted << "f" << std::endl;
	}
	return ;
}

void ScalarConv::convertToDouble() {
	if (_generalValueStatus != e_ok) {
		switch (_generalValueStatus) {
			case e_minusInf:
				std::cout << "double: -inf" << std::endl;
				break;
			case e_plusInf:
				std::cout << "double: +inf" << std::endl;
				break;
			case e_nan:
				std::cout << "double: nan" << std::endl;
				break;
			case e_invalidArgument:
				std::cout << "double: invalid argument" << std::endl;
				break;
		}
	}
	else {
		std::cout << "double: " << _generalValue << std::endl;
	}
	return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

ScalarConv & ScalarConv::operator=(ScalarConv & obj) {
	(void)obj;
	return *this;
}
