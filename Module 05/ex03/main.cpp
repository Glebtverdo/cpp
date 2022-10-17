#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"Intern.hpp"

int main()
{
    const std::string strsToTest[] = {
        "shrubbery creation",
        "presidental pardon",
        "robotomy request",
        "hrubbery creation",
        "residental pardon",
        "obotomy request"
    };
    Intern machine;
    for (size_t i = 0; i < 6; i++)
    {
        const Form *tmp = machine.makeForm(strsToTest[i], "target");
        if(tmp){
            tmp->action();
            delete tmp;
        }
    }
    
    return 0;
}