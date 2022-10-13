#include"Form.hpp"

int main()
{
    Bureaucrat two("sam", 50);
    
    Form order1("order1", 155, 0);
    std::cout << order1;
    two.signForm(order1);
    Form order2("order", 3, 1);
    two.signForm(order2);
    return 0;
}