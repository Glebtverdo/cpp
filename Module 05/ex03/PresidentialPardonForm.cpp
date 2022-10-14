#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Robotomy", 25, 5), _target("unknown") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Robotomy", 25, 5),  _target(target){
}

void PresidentialPardonForm::action() const{
    std::cout << getTarget() + " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &srcForCopy){
    *this = srcForCopy;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &srcForAssigment){
    _target.copy((char *)&srcForAssigment.getName()[0], srcForAssigment.getName().length());
    this->_isSigned = srcForAssigment.getIsSinged();     
    return *this;
}

void PresidentialPardonForm::print(){
    std::cout<< "PresidentialPardonForm " + this->message();
}

std::string PresidentialPardonForm::getTarget() const{
    return _target;
}