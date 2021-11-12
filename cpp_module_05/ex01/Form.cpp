#include "Form.hpp"

  /******************/
 /*  Constructors  */
/******************/

Form::Form() : _name("Garbage Form"), _gradeToSign(10), _gradeToExecute(50) {
    _isSigned = false;
    return ;
}

Form::Form(std::string const name, bool isSigned, int const gradeToSign, int const gradeToExecute) : 
                                  _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    _isSigned = isSigned;
    return ;
}

Form::Form(Form const & obj) : _name(obj._name), _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute) {
    *this = obj;
    _isSigned = obj._isSigned;
    return ;
}

  /****************/
 /*  Destructor  */
/****************/

Form::~Form() {
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

std::string const Form::getName() {
    return _name;
}

bool Form::getSigned() {
    return _isSigned;
}

int Form::getGradeToSign() {
    return _gradeToSign;
}

int Form::getGradeToExecute() {
    return _gradeToExecute;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Form & Form::operator=(Form const & obj) {
	(void)obj;
	return *this;
}

  /**********************************/
 /*  Operator Overloading Ostream  */
/**********************************/

std::ostream & operator<<(std::ostream & output, Form & obj) {
    output << "Form Name: " << obj.getName() << std::endl;
    output << "Signed: " << obj.getSigned() << std::endl;
    output << "Grade To Sign: " << obj.getGradeToSign() << std::endl;
    output << "Grade To Execute: " << obj.getGradeToExecute() << std::endl;
    return output;
}