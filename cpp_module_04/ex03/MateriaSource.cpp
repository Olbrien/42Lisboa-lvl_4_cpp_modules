#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    _materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & obj) {
	*this = obj;
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
	return ;
}

MateriaSource::~MateriaSource() {
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

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->_materias[0] == NULL)
		this->_materias[0] = m->clone();
    else if (this->_materias[1] == NULL)
		this->_materias[1] = m->clone();
    else if (this->_materias[2] == NULL)
		this->_materias[2] = m->clone();
    else if (this->_materias[3] == NULL)
		this->_materias[3] = m->clone();
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
			break;
		if (this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	return (0);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& origin)
{
	if (this == &origin)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (origin._materias[i])
			this->_materias[i] = origin._materias[i]->clone();
	}
	return (*this);
}