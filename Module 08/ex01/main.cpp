#include"Span.hpp"


int main(){
    Span sp = Span(10005);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::vector<int> bigArr(20000);
    int i = 0;
    while (i < 10000)
    {
        bigArr[i] = i;
        if(i == 5000)
            bigArr[i] = 20000; 
        i++;
    }
    
    sp.addByIteratorRange(bigArr.begin(), bigArr.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}