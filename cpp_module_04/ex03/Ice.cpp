#include "Ice.hpp"

Ice::Ice() {
	this->type = "ice";
	return ;
}

Ice::Ice(std::string const & type) {
	this->type = type;
	return ;
}

Ice::Ice(Ice const & obj) {
	*this = obj;
	return ;
}

Ice::~Ice() {
	return ;
}

Ice & Ice::operator=(Ice const & obj) {
	(void)obj;
	return *this;
}

AMateria* Ice::clone() const {
	AMateria *clone = new Ice(this->type);
	return clone;
}

void Ice::use(ICharacter& target) {
	std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
	return ;
}
