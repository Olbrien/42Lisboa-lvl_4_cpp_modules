#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.class.hpp"

class phonebook {
    
    public:       

        phonebook();
        ~phonebook(); 

        void AddContact(contact *contacts);
        void SearchContacts(contact *contacts);

    private:

        static int _count;

};

#endif