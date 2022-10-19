#include"Span.hpp"

Span::Span(): len(1), _index(0), _min(-1), _max(-1){}

Span::Span(unsigned int N):len(N), _index(0), _min(-1), _max(-1){}

Span::~Span(){}
void Span::addNumber(int num){
    if(_index != len){
        _arr.push_back(num);
        if(_index > 1 && _index != len - 1){
            int diff = (_arr.at(_index) < 0 ? _arr.at(_index) * -1 : _arr.at(_index)) - (_arr.at(_index - 1) < 0 ? _arr.at(_index - 1) * -1 : _arr.at(_index - 1)) ;
            if(diff < 0)
                diff *= -1;
            if( (diff < _min || _min == -1) && diff != 0)
                _min = diff;
            if((diff > _max || _max == -1) && diff != 0)
                _max = diff;
        }
        _index++;
    }
    else
        throw Span::tooManyMembersExeption();
}

Span::Span(const Span &src){
    *this = src;
}
Span  &Span::operator=(const Span &src){
    this->len = src.len;
    for (unsigned int i = 0; i < this->len; i++)
        this->_arr.at(i) = src._arr.at(i);
    _index = src._index;
    _min = src._min;
    _max = src._max;
    return *this;
}

int Span::shortestSpan(){
    if(_min <= 0)
        throw Span::noMemberExeption();
    return _min;
}

int Span::longestSpan(){
    if(_max <= 0)
        throw Span::noMemberExeption();
    return _max;
}

void Span::addByIteratorRange( std::vector<int>::iterator begin, std::vector<int>::iterator end){
    try
    {
        for (std::vector<int>::iterator i = begin; i < end; ++i)
        {
            std::cout << *i << "   ";
            this->addNumber(*i);
        }
    }
    catch(const Span::tooManyMembersExeption& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}
const char * Span::tooManyMembersExeption::what() const throw() {
    return "Too Many Members\n";
}

const char * Span::noMemberExeption::what() const throw() {
    return "error no diffs or members\n";
}
