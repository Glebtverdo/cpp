#include<iostream>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << (void *)&str << "\n";
    std::cout << (void *)stringPTR << "\n";
    std::cout << (void *)&stringREF << "\n";
    std::cout << str << "\n";
    std::cout << *stringPTR << "\n";
    std::cout << stringREF << "\n";
    return 0;
}
