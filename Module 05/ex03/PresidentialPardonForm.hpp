#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include"Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
        void action() const;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &srcForCopy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &srcForAssigment);
        std::string getTarget() const;
        void print();
};


#endif 