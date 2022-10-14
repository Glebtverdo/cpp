#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include"Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
        void action() const;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &srcForCopy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &srcForAssigment);
        std::string getTarget() const;
        void print();
};


#endif 