#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include "Contact.hpp"

class PhoneBook{
    private:
        Contact _contactsArr[8];
        int _contactIndex;
    public:
        PhoneBook();
        void addContact();
        void searchContact();
};

#endif