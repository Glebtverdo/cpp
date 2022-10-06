#include "Contact.hpp"

Contact::Contact(){
    _id = -1;
}

void Contact::printWord(std::string str, bool isRightAligned){
    if(isRightAligned){
        int spacesBeforeWord = 10 - str.length();
        while (spacesBeforeWord > 0)
        {
            std::cout << ' ';
            spacesBeforeWord--;
        }
    }
    for (std::string::iterator i = str.begin(); i != str.end(); ++i)
    {
        std::cout << *i; 
    }    
}

int Contact::getId(){
    return _id;
}

std::string Contact::makeWordShorter(std::string str){
    if(str.length() > 10){
        char newStr[11];
        int i = 0;
        while (i < 9)
        {
            newStr[i] = str[i];
            i++;
        }
        newStr[9] = '.';
        newStr[10] = '\0';
        return newStr;
    }
    return str;
}

void Contact::setParams(int id, std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret){
    _id = id;
    _firstName = firstName;
    _lastName = lastName;
    _nickname = nickname;
    _phoneNumber = phoneNumber;
    _darkestSecret = darkestSecret;
}
void Contact::printPreviewInfo(){
    std::cout << "         " << _id;
    std::cout << "|";
    printWord(makeWordShorter(_firstName), true);
    std::cout << "|";
    printWord(makeWordShorter(_lastName), true);
    std::cout << "|";
    printWord(makeWordShorter(_nickname), true);
    std::cout << "\n";
}
void Contact::printFullInfo(){
    std::cout << "Id = " << _id;
    std::cout << "\n" << "First Name = ";
    printWord(_firstName, false);
    std::cout << "\n" << "Last Name = ";
    printWord(_lastName, false);
    std::cout << "\n" << "Nickname = ";
    printWord(_nickname, false);
    std::cout << "\n" << "Phone Number = ";
    printWord(_phoneNumber, false);
    std::cout << "\n" << "Darkest Secret = ";
    printWord(_darkestSecret, false);
    std::cout << "\n";
}