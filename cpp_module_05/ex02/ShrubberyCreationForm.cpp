#include "ShrubberyCreationForm.hpp"

  /******************/
 /*  Constructors  */
/******************/

ShrubberyCreationForm::ShrubberyCreationForm() {
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", false, 145, 137) {
    _target = target;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & obj) {
    *this = obj;
    return ;
}

  /****************/
 /*  Destructor  */
/****************/

ShrubberyCreationForm::~ShrubberyCreationForm() {
    return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void ShrubberyCreationForm::action() const {
	std::ofstream out(_target + "_shrubbery");
	
	out << "         .              " << std::endl;         
	out << "        /|\\\\            " << std::endl;                         
	out << "       //|\\\\           " << std::endl;         
	out << "        |||             " << std::endl; 
	out << "        |||             " << std::endl;   

	out.close();
    return ;
}


  /**************************/
 /*  Operator Overloading  */
/**************************/

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm & obj) {
	(void)obj;
	return *this;
}