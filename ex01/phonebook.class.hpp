#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.class.hpp"
# include "main.hpp"

class phonebook {

    public:

        void AddContact();
        void SearchContacts();

    private:

        static int _count;
		contact contacts[8];

};

#endif
