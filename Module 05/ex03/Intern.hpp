#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"

class Intern
{
  public:
      Intern();
      ~Intern();
      Intern(const Intern &srcForCopy);
      class UnknownFormName: std::exception {
          public:
            virtual const char *what () const throw();
      };
      Intern & operator=(const Intern &srcForAssigment);
      Form *makeForm(std::string formName, std::string formTarget);
};
#endif