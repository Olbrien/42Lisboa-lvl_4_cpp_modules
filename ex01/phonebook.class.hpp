#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class phonebook {
    
    public:       

        phonebook();
        ~phonebook(); 

        void AddContact(contact *contacts);

    private:

        static int _count;

};

#endif