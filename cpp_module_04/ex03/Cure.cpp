#include "Cure.hpp"

Cure::Cure() {
	this->type = "cure";
	return ;
}

Cure::Cure(std::string const & type) {
	this->type = type;
	return ;
}

Cure::Cure(Cure const & obj) {
	*this = obj;
	return ;
}

Cure::~Cure() {
	return ;
}

Cure & Cure::operator=(Cure const & obj) {
	(void)obj;
	return *this;
}

AMateria* Cure::clone() const {
	AMateria *clone = new Cure(this->type);
	return clone;
}

void Cure::use(ICharacter& target) {
	std::cout << " heals " << target.getName() << " wounds" << std::endl;
	return ;
}
