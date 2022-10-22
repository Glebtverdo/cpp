#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void): std::stack<T>(){}
        MutantStack(const MutantStack &src): std::stack<T>(src){};
        MutantStack &operator=(const MutantStack &src){ return std::stack<T>(src);}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin(){ return std::stack<T>::c.begin();}
        iterator    end(){ return std::stack<T>::c.end();}

};

#endif