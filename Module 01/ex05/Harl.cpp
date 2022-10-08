#include"Harl.hpp"

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!\n";
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level){
    int i = 0;
    void (Harl::*funcsArr[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string namesArr[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    while (i < 4)
    {
        if(level.compare(0, level.length(), namesArr[i]) == 0){
            void (Harl::*somethingToUseFuncs)(void) = funcsArr[i];
            (this->*somethingToUseFuncs)();
        }
        i++;
    }
}
