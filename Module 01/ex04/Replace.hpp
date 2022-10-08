#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <iostream>
# include <fstream>

class Replace
{
    private:
        std::string _fileName, _stringToSearch, _stringToReplace;
        std::string *openAndRead();
        void createAndWrite(std::string text);
    public:
        Replace(std::string fileName, std::string stringToSearch, std::string stringToReplace);
        void replace();
        void setFileName(std::string str);
        void setStringToSearch(std::string str);
        void setStringToReplace(std::string str);
};

#endif