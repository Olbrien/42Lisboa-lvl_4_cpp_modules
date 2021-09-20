#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class phonebook {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        int phone_number;
        std::string darkest_secret;

    public:
        void setFirstName(std::string str);
        void setLastName(std::string str);
        void setNickname(std::string str);
        void setPhoneNumber(int phone);
        void setDarkestSecret(std::string str);

        std::string getFirstName() {
            return(first_name);
        }
        std::string getLastName() {
            return(last_name);
        }
        std::string getNickname() {
            return(nickname);
        }
        int getPhoneNumber() {
            return(phone_number);
        }
        std::string getDarkestSecret() {
            return(darkest_secret);
        }
};

#endif