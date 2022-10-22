#include"MutantStack.hpp"


int main(){
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    MutantStack<int> s(mstack);
    MutantStack<int>::iterator sit = s.begin();
    MutantStack<int>::iterator site = s.end();
    ++sit;
    --sit;
    while (sit != site)
    {
        std::cout << *sit << std::endl;
        ++sit;
    }
    std::stack<int> noit(s);
    noit.push(20);
    std::cout << noit.top() << "\n";
    std::cout << noit.size() << "\n" << "\nassigment\n";

    MutantStack<int>  sCopy = s;
    MutantStack<int>::iterator sCopyit = sCopy.begin();
    MutantStack<int>::iterator sCopyite = sCopy.end();
    ++sCopyit;
    --sCopyit;
    while (sCopyit != sCopyite)
    {
        std::cout << *sCopyit << std::endl;
        ++sCopyit;
    }
    return 0;
}