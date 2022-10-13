#ifndef FORM_HPP
# define FORM_HPP
# include"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
        const int _gradeToSingIn, _gradeToEx;
        const std::string _name;
        bool _isSigned;
        virtual void checkGrade(int grade);
        virtual void signIn();
    public:
        Form();
        Form(std::string name, int gradeToSingIn, int gradeToEx);
        virtual ~Form();
        Form(const Form &srcForCopy);
        class GradeTooHighException: std::exception {
            public:
                virtual const char *what () const throw();
        };
        class GradeTooLowException: std::exception {
            public:
                virtual const char *what () const throw();
        };
        virtual Form &operator=(const Form &srcForAssigment);
        virtual int getGradeToSingIn() const ;
        virtual int getGradeToEx() const;
        virtual std::string getName() const;
        virtual void print() =0;
        virtual bool getIsSinged() const;
        virtual std::string message() const;
        virtual void action() const =0;
        virtual void beSing(const Bureaucrat & slave);
        virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &file, const Form &someform);

#endif 