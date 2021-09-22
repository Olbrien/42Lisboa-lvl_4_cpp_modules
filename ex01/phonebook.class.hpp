#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class phonebook {

    public:
        void setFirstName(std::string str);
        void setLastName(std::string str);
        void setNickname(std::string str);
        void setPhoneNumber(int phone);
        void setDarkestSecret(std::string str);

        phonebook();
        ~phonebook();

        std::string getFirstName() {
            return(_first_name);
        }
        std::string getLastName() {
            return(_last_name);
        }
        std::string getNickname() {
            return(_nickname);
        }
        int getPhoneNumber() {
            return(_phone_number);
        }
        std::string getDarkestSecret() {
            return(_darkest_secret);
        }

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        int _phone_number;
        std::string _darkest_secret;
        
        static int _count;
};

int phonebook::_count = 0;

#endif