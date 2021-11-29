#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
	public:
		Data() {};															//
		Data(std::string dataType) : _dataType(dataType) {};
		Data(Data const & obj) { (void)obj; };								//
		~Data() {};															//
		Data & operator=(Data const & obj) { (void)obj; return *this; };	//

		void setDataType(std::string dataType) {_dataType = dataType;};
		std::string getDataType() {return (_dataType);};

	private:
		std::string		_dataType;
};

#endif
