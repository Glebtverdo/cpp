#ifndef SPAN_HPP
# define SPAN_HPP 
# include<iostream>
# include<vector>

class Span
{
private:
    unsigned int len, _index;
    int _min, _max;
    std::vector<int> _arr;
public:
    Span();
    ~Span();
    Span(const Span &src);
    Span(unsigned int N);
    Span &operator=(const Span &src);
    int shortestSpan();
    int longestSpan();
    void addNumber(int num);
    void addByIteratorRange( std::vector<int>::iterator begin, std::vector<int>::iterator end);
    class noMemberExeption : std::exception
    {
        public:
            virtual const char *what () const throw();
    };
    class tooManyMembersExeption : std::exception
    {
        public:
            virtual const char *what () const throw();
    };
};

#endif