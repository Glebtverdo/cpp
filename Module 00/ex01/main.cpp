#include "PhoneBook.hpp"

int main()
{
    PhoneBook MainBook;
    std::string str;
    while (1)
    {
        std::cin >> str;
        if(str.compare(0, str.length(), "ADD\0") == 0)
            MainBook.addContact();
        else if(str.compare(0, str.length(), "SEARCH\0") == 0)
            MainBook.searchContact();
        else if(str.compare(0, str.length(), "EXIT\0") == 0)
            return 0;
    }    
    return 0;
}
