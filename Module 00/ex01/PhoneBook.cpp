#include"PhoneBook.hpp"

PhoneBook::PhoneBook(){
    _contactIndex = 0;
}

void PhoneBook::addContact(){
    std::string paramsArr[5] = {
        "First Name      ",
        "Last Name       ",
        "Nickname        ",
        "Phone Number    ",
        "Darkest Secret  "
    };
    std::string paramsValueArr[5];
    int i = 0;

    while (i < 5)
    {
        std::cout << "Please input " << paramsArr[i];
        std::cin >> paramsValueArr[i];
        i++;
    }
    _contactsArr[_contactIndex].setParams(_contactIndex, paramsValueArr[0], paramsValueArr[1], paramsValueArr[2], paramsValueArr[3], paramsValueArr[4]);
    if (_contactIndex == 5)
        _contactIndex = 0;
    else
        _contactIndex++;
}

void PhoneBook::searchContact(){
    int i = 0;
    int indexToSearch;
    while (i < 8){
        if(_contactsArr[i].getId() != -1)
            _contactsArr[i].printPreviewInfo();
        i++;
    }
    std::cout << "enter id";
    std::cin >> indexToSearch;
    if (indexToSearch < 8 && indexToSearch > -1 && _contactsArr[indexToSearch].getId() != -1)
        _contactsArr[indexToSearch].printFullInfo();
    else
        std::cout << "unvalid id\n";
}