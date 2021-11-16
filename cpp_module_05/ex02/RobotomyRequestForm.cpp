#include "RobotomyRequestForm.hpp"

  /******************/
 /*  Constructors  */
/******************/

RobotomyRequestForm::RobotomyRequestForm() {
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", false, 145, 137) {
    _target = target;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & obj) {
    *this = obj;
    return ;
}

  /****************/
 /*  Destructor  */
/****************/

RobotomyRequestForm::~RobotomyRequestForm() {
    return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void RobotomyRequestForm::action() const {
	std::cout << "Drilling noises." << std::endl;

    srand((unsigned int)time(NULL));

	if (rand() % 2) {
		std::cout << _target << " has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << "Failure!!" << std::endl;
	}
    return ;
}


  /**************************/
 /*  Operator Overloading  */
/**************************/

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm & obj) {
	(void)obj;
	return *this;
}