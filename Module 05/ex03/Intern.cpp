#include "Intern.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"

Intern::Intern():{}
Intern::~Intern(){}

Intern::Intern(const Intern &srcForCopy){
    *this = srcForCopy;
}
Intern & Intern::operator=(const Intern &srcForAssigment){
  return Intern();
}
Form * Intern::makeForm(std::string formName, std::string formTarget){
  int i = 0;
  const std::string formNames[3] = {
    "robotomy request",
    "shrubbery creation",
    "presidental paedon"
  };
  const Form *forms[3] = {
    &ShrubberyCreationForm(),
    &PresidentialPardonForm(),
    &RobotomyRequestForm()
  };
  try
  {
    while (i < 4)
    {
      if (i == 3)
        throw Intern::UnknownFormName();
      
    }
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
}