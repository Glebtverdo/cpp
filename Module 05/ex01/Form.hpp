#ifndef FORM_HPP
# define FORM_HPP
# include"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const int _gradeToSingIn, _gradeToEx;
        const std::string _name;
        bool _isSigned;
        void checkGrade(int grade);
        void signIn();
    public:
        Form();
        Form(std::string name, int gradeToSingIn, int gradeToEx);
        ~Form();
        Form(const Form &srcForCopy);
        class GradeTooHighException: std::exception {
            public:
                virtual const char *what () const throw();
        };
        class GradeTooLowException: std::exception {
            public:
                virtual const char *what () const throw();
        };
        Form &operator=(const Form &srcForAssigment);
        int getGradeToSingIn() const;
        int getGradeToEx() const;
        std::string getName() const;
        bool getIsSinged() const;
        std::string message() const;
        void beSing(const Bureaucrat & slave);
};

std::ostream &operator<<(std::ostream &file, const Form &someform);

#endif 