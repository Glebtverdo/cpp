#include"Form.hpp"

Form::Form(): _gradeToSingIn(150), _gradeToEx(150), _name("unknown"),   _isSigned(false) {
}

Form::Form(std::string name, int gradeToSingIn, int gradeToEx): 
    _gradeToSingIn(gradeToSingIn > 150 || gradeToSingIn < 1 ? 150 : gradeToSingIn),
    _gradeToEx(gradeToEx > 150 || gradeToEx < 1 ? 150 : gradeToEx),
    _name(name),
    _isSigned(false) {
    try
    {
        checkGrade(gradeToEx);
        checkGrade(gradeToSingIn);
    }catch(const Form::GradeTooHighException& e){
        std::cerr << e.what();
    }catch(const Form::GradeTooLowException& e){
        std::cerr << e.what();
    }
    
}

Form::Form(const Form &srcForCopy): 
    _gradeToSingIn(srcForCopy.getGradeToSingIn()),
    _gradeToEx(srcForCopy.getGradeToEx()){
    *this = srcForCopy;
}

Form &Form::operator=(const Form & srcForAssigment){
    _name.copy((char *)&srcForAssigment.getName()[0], srcForAssigment.getName().length());
    _isSigned = srcForAssigment.getIsSinged();
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
    return _isSigned;
}

std::string Form::message() const{
    return this->getName() + ":\n   isSinged = " + (this->getIsSinged() ? "true " : "false ") \
     + "\n   grade to sing in = " + std::to_string(this->getGradeToSingIn()) + \
     "\n   grade to action = " + std::to_string(this->getGradeToEx()) + "\n";
}

std::ostream &operator<<(std::ostream &file, const Form &someForm){
    return file << "Form " + someForm.message();
}

void Form::checkGrade(int grade){
    if(grade > 150)
        throw Form::GradeTooLowException();
    else if(grade < 1)
        throw Form::GradeTooHighException();   
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade is too Low \n";
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade is too High\n";
}

Form::~Form(){}

void Form::beSing(const Bureaucrat & slave){
    try
    {
        if(!this->getIsSinged()){
            if(slave.getGrade() <= this->getGradeToSingIn()){
                std::cout << slave.getName() + " singed " + this->getName() << "\n";
                signIn();
            }else{
                std::cout << slave.getName() + " could not sign " + this->getName() + " because";
                throw Form::GradeTooLowException();
            }
        }else{
            std::cout << slave.getName() + " could not sign " + this->getName() + " because it is alredy singed in\n"; 
        }
    }catch(const Form::GradeTooLowException& e){
        std::cerr << e.what();
    }
    
}

void Form::signIn(){
    this->_isSigned = true;
}

void Form::print(){
    std::cout << "Form " + message();
}

void Form::execute(Bureaucrat const & executor) const{
    try
    {
        if(executor.getGrade() <= this->getGradeToEx()){
            this->action();
        }else
            throw Form::GradeTooLowException();
    }catch(const Form::GradeTooLowException& e){
        std::cerr << e.what();
    }
    
}