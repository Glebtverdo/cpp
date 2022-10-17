#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

Base *generate(){
    int random = (1 + rand() % 9);
    if(random <=3){
        std::cout << "A == ";
        return new A;
    }
    else if (random <=6){
        std::cout << "B == ";
        return new B;
    }  
    else {
        std::cout << "C == ";
        return new C; 
    }  
}

void identify(Base* p){
    if(dynamic_cast<A*>(p) != NULL)
        std::cout << "A\n";
    if(dynamic_cast<B*>(p) != NULL)
        std::cout << "B\n";
    if(dynamic_cast<C*>(p) != NULL)
        std::cout << "C\n";
};
void identify(Base& p)
{
    identify(&p);
};

int main(){
    for (size_t i = 0; i < 10; i++)
    {
        identify(generate());
        identify(*generate());
    }
}