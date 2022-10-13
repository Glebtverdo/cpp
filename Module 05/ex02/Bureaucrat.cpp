#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("noName"){
    _grade = 150;
    std::cout << messadge();
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name){
    try
    {
        grade > 150 ? throw Bureaucrat::GradeTooLowException() : grade < 1 ? throw Bureaucrat::GradeTooHighException() :  _grade = grade;
    }
    catch(const Bureaucrat::GradeTooHighException &e){
        std::cerr << e.what();
        _grade = 1;
        std::cout << messadge();
    }catch(const Bureaucrat::GradeTooLowException &e){
        std::cerr << e.what();
        _grade = 150;
        std::cout << messadge();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &srcForCopy){
    *this = srcForCopy;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &srcForAssigment){
    _name.copy((char *)&srcForAssigment.getName()[0], srcForAssigment.getName().length());
    _grade = srcForAssigment.getGrade();
    return *this;
}

const std::string Bureaucrat::getName() const{
    return _name;
}

int Bureaucrat::getGrade() const{
    return _grade;
}

void Bureaucrat::gradeIncrement(){
    try
    {
        _grade - 1 < 1 ? throw Bureaucrat::GradeTooHighException() : _grade --;
    }catch(const Bureaucrat::GradeTooHighException &e){
        std::cerr << e.what();
    }
};
void Bureaucrat::gradeDecrement(){
    try
    {
        _grade + 1 > 150 ? throw Bureaucrat::GradeTooLowException() : _grade++;
    }catch(const Bureaucrat::GradeTooLowException &e){
        std::cerr << e.what();
    }
};

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is to0 Low now it is 150\n";
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is to0 High now it is 1\n";
}

std::string Bureaucrat::messadge() const{
    return "Bureaucrat " + _name + " with grade " + std::to_string(_grade) + " was made\n";
}

std::ostream &operator<<(std::ostream &file, const Bureaucrat &srcToShow){
    file << srcToShow.messadge();
    return file;
}

void Bureaucrat::signForm(Form & form) {
    form.beSing(*this);
}

void Bureaucrat::executeForm(Form & form) {
    form.execute(*this);
}