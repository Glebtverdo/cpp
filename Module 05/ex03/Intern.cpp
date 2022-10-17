#include "Intern.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"

Intern::Intern(){}
Intern::~Intern(){}

Intern::Intern(const Intern &srcForCopy){
    *this = srcForCopy;
}
Intern  &Intern::operator=(const Intern &srcForAssigment){
  (void)srcForAssigment;
  return *this;
}
Form * Intern::makeForm(std::string formName, std::string formTarget){
  int i = 0;
  const std::string formNames[3] = {
    "shrubbery creation",
    "presidental pardon",
    "robotomy request"
  };
  Form *forms[3] = {
    new ShrubberyCreationForm(formTarget),
    new PresidentialPardonForm(formTarget),
    new RobotomyRequestForm(formTarget)
  };

  Form *tmp = NULL;

  try
  {
    while (i < 3)
    {
      if(formNames[i].compare(formName) == 0)
        tmp = forms[i];
      else
        delete forms[i];
      i++;
      if (i == 3 && !tmp)
        throw Intern::UnknownFormName();
    }
  }
  catch(const Intern::UnknownFormName &e)
  {
    std::cerr << e.what() << '\n';
    return NULL;
  }
  return tmp;
}

const char *Intern::UnknownFormName::what() const throw(){
  return "unknown form type";
}