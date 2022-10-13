#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP
# include"Form.hpp"
# include <fstream>
class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
        void action() const;
    public: 
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &srcForCopy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &srcForAssigment);
        std::string getTarget() const;
        void print();
};


#endif 