#include"Bureaucrat.hpp"

int main()
{
    Bureaucrat one;
    Bureaucrat two("sam", 50);
    Bureaucrat a("sam", 0);
    Bureaucrat b("sam", 200);
    Bureaucrat jim("jim", 1);
    jim.gradeIncrement();
    std::cout << jim.getGrade() << "\n";
    Bureaucrat will("will", 150);
    will.gradeDecrement();
    std::cout<< will.getGrade() << "\n";
    return 0;
}