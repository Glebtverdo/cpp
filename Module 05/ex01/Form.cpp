#include"Form.hpp"

Form::Form(): _name("unknown"), _gradeToEx(150), _gradeToSingIn(150), _isSinged(false) {
}

Form::Form(std::string name, int gradeToSingIn, int gradeToEx)
    : _name(name), _gradeToEx(gradeToEx), _gradeToSingIn(gradeToSingIn), _isSinged(false) {
}

Form::Form(const Form &srcForCopy): 
    _gradeToEx(srcForCopy.getGradeToEx()), _gradeToSingIn(srcForCopy.getGradeToSingIn()){
    *this = srcForCopy;
}

Form &Form::operator=(const Form & srcForAssigment){
    _name.copy((char *)&srcForAssigment.getName()[0], srcForAssigment.getName().length());
    _isSinged = srcForAssigment.getIsSinged();
    return *this;
}

std::string Form::getName() const{
    return _name;
}
int Form::getGradeToEx() const{
    return  _gradeToEx;
}
int Form::getGradeToSingIn() const{
    return _gradeToSingIn;
}
bool Form::getIsSinged() const{
    return _isSinged;
}

std::string Form::message() const{
    return "Form " + this->getName() + " is singed " + (this->getIsSinged() ? "true " : "false ") \
     + "grade to sing in " + std::to_string(this->getGradeToSingIn()) + " grade to execute " + std::to_string(this->getGradeToEx()) + "\n";
}

std::ostream &operator<<(std::ostream &file, const Form &someForm){
    return file << someForm.message();
}
