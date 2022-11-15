#include"Fixed.hpp"

int main(int ac, char **av){
    if(ac == 2){
        Fixed some(av[1]);
        some.showChar();
        some.showInt();
        some.showFloat();
        some.showDouble();
        return 0;
    }else{
        std::cout << "wrong args\n";
        return 1;
    }
}