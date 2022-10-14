#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery", 145, 137), _target("unknown") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 145, 137),  _target(target){
}

void ShrubberyCreationForm::action() const{
    std::ofstream newFile(getTarget() + "_shrubbery");
    if(newFile.is_open()){
        newFile << "\
                                              .         ;        \n\
                 .              .              ;%     ;;         \n\
                   ,           ,                :;%  %;          \n\
                    :         ;                   :;%;'     .,   \n\
           ,.        %;     %;            ;        %;'    ,;     \n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'      \n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;'       \n\
               ;%;      %;        ;%;        % ;%;  ,%;'         \n\
                `%;.     ;%;     %;'         `;%%;.%;'           \n\
                 `:;%.    ;%%. %@;        %; ;@%;%'              \n\
                    `:%;.  :;bd%;          %;@%;'                \n\
                      `@%:.  :;%.         ;@@%;'                 \n\
                        `@%.  `;@%.      ;@@%;                   \n\
                          `@%%. `@%%    ;@@%;                    \n\
                            ;@%. :@%%  %@@%;                     \n\
                              %@bd%%%bd%%:;                      \n\
                                #@%%%%%:;;                       \n\
                                %@@%%%::;                        \n\
                                %@@@%(o);  . '                   \n\
                                %@@@o%;:(.,'                     \n\
                            `.. %@@@o%::;                        \n\
                               `)@@@o%::;                        \n\
                                %@@(o)::;                        \n\
                               .%@@@@%::;                        \n\
                               ;%@@@@%::;.                       \n\
                              ;%@@@@%%:;;;.                      \n\
                          ...;%@@@@@%%:;;;;,..                   \n";
        newFile.close();
    }else
        std::cout << "Error with making newFile\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &srcForCopy){
    *this = srcForCopy;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &srcForAssigment){
    _target.copy((char *)&srcForAssigment.getName()[0], srcForAssigment.getName().length());
    this->_isSigned = srcForAssigment.getIsSinged();     
    return *this;
}

void ShrubberyCreationForm::print(){
    std::cout<< "ShrubberyCreationForm " + this->message();
}

std::string ShrubberyCreationForm::getTarget() const{
    return _target;
}