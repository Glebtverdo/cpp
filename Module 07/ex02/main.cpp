#include"Array.hpp"

int main(){
    Array<int> some(10);
    Array<int> someCpy(some);
    Array<char> charArr(50);
    std::cout << charArr.size() << "\n";
    try
    {
        some[0] = 1;
        someCpy[0] = 5;
        std::cout << some[0] << "   " << someCpy[0] << "\n";
        some[20] = 20;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of boundle" << '\n';
    }
    
}