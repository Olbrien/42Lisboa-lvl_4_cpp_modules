#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
};

int main() {
	Data		data("DATA 1");
	uintptr_t	raw;
	Data		*ptr;

	std::cout << data.getDataType() << std::endl;

	raw = serialize(&data);
	ptr = deserialize(raw);

	std::cout << ptr->getDataType() << std::endl;
	ptr->setDataType("DATA 2");
	std::cout << ptr->getDataType() << std::endl;

	std::cout << &data << std::endl;
	std::cout << ptr << std::endl;
}
