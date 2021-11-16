#include "PresidentialPardonForm.hpp"

  /******************/
 /*  Constructors  */
/******************/

PresidentialPardonForm::PresidentialPardonForm() {
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", false, 145, 137) {
    _target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & obj) {
    *this = obj;
    return ;
}

  /****************/
 /*  Destructor  */
/****************/

PresidentialPardonForm::~PresidentialPardonForm() {
    return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void PresidentialPardonForm::action() const {
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    return ;
}


  /**************************/
 /*  Operator Overloading  */
/**************************/

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm & obj) {
	(void)obj;
	return *this;
}