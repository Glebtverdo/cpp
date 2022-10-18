#include"templates.h"

void func(char s){
    std::cout << (char)std::toupper(s);
}

int main(){
    char str[5] = "some";

    iter(str, 5, &func);
}