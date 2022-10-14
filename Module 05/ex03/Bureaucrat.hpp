#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &srcForCopy);
    class GradeTooHighException: std::exception {
        public:
           virtual const char *what () const throw();
    };
    class GradeTooLowException: std::exception {
        public:
           virtual const char *what () const throw();
    };
    Bureaucrat & operator=(const Bureaucrat &srcForAssigment);
    const std::string getName() const;
    int getGrade() const;
    void gradeIncrement();
    void gradeDecrement();
    std::string messadge() const;
    void signForm(Form & form);
    void executeForm(Form & form);
};

std::ostream &operator<<( const std::ostream &file, const Bureaucrat &srcToShow);

#endif