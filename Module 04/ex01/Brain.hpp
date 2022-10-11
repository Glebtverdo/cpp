#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &srcForCopy);
    Brain &operator=(const Brain &srcForAssigment);
    void showIdeaByIndex(int index);
};

#endif