#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class contact {

    public:
        
        void setFirstName(std::string str);
        void setLastName(std::string str);
        void setNickname(std::string str);
        void setPhoneNumber(std::string str);
        void setDarkestSecret(std::string str);

        std::string getFirstName() { return(_first_name); }
        std::string getLastName() { return(_last_name); }
        std::string getNickname() { return(_nickname); }
        std::string getPhoneNumber() { return(_phone_number); }
        std::string getDarkestSecret() { return(_darkest_secret); }

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;        
};

#endif