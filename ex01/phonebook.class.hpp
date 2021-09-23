#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include "contact.class.hpp"

class phonebook {

    public:

        phonebook();
        ~phonebook();

        void AddContact();
        void SearchContacts();

    private:

        static int _count;
		contact contacts[8];

};

#endif
