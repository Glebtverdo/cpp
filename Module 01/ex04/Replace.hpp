#include <iostream>
#include <fstream>

class Replace
{
    private:
        std::string _fileName, _stringToSearch, _stringToReplace;
        std::string openAndRead();
        void openAndRead(std::string text);
    public:
        Replace(std::string fileName, std::string stringToSearch, std::string stringToReplace);
        ~Replace();
        void replace();
        void setFileName(std::string str);
        void setStringToSearch(std::string str);
        void setStringToReplace(std::string str);
};
