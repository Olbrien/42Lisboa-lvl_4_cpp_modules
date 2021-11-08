#include "AMateria.hpp"

AMateria::AMateria() {
	return ;
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
	return ;
}

AMateria::~AMateria() {
	return ;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	return ;
}
