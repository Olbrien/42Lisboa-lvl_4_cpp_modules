#include "Character.hpp"

Character::Character() {
	this->_name = "No Name";
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
	return ;
}

Character::Character(std::string const & name) {
	this->_name = name;
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
	return ;
}

Character::Character(Character const & obj) {
	*this = obj;
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
	return ;
}

Character::~Character() {
	if (_materias[0] != NULL)
		delete _materias[0];
	if (_materias[1] != NULL)
		delete _materias[1];
	if (_materias[2] != NULL)
		delete _materias[2];
	if (_materias[3] != NULL)
		delete _materias[3];
	return ;
}

Character& Character::operator=(const Character& obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (obj._materias[i] != NULL)
			this->_materias[i] = obj._materias[i]->clone();
	}
	this->_name = obj._name;
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (this->_materias[0] == NULL)
		this->_materias[0] = m;
	else if (this->_materias[1] == NULL)
		this->_materias[1] = m;
	else if (this->_materias[2] == NULL)
		this->_materias[2] = m;
	else if (this->_materias[3] == NULL)
		this->_materias[3] = m;
	return ;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		this->_materias[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx] != NULL)
	{
		std::cout << this->_name;
		this->_materias[idx]->use(target);
	}
	return ;
}
