#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource(); //
		MateriaSource(MateriaSource const & obj); //
        ~MateriaSource(); //
		MateriaSource & operator=(MateriaSource const & obj); //

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
    
    private:
        AMateria*   _materias[4];
};

#endif