#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact{
    private:
        int _id;
        std::string _firstName, _lastName, _nickname, _phoneNumber, _darkestSecret;
        void printWord(std::string str, bool isRightAligned);
        std::string makeWordShorter(std::string str);
        std::string inputParam();
    public:
        Contact();
        int getId();
        void setParams(int id, std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
        void printPreviewInfo();
        void printFullInfo();
};

#endif