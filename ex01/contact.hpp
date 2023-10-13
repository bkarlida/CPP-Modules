#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    public:
        std::string	firstname;
	    std::string	lastname;
	    std::string	nickname;
	    std::string	phonenumber;
	    std::string	darkSecret;

        void    setFirst_name(std::string firstname);
        void    setLast_name(std::string lastname);
        void    setNick_name(std::string nickname);
        void    setPhone_number(std::string phonenumber);
        void    setDark_secret(std::string darkSecret);
        
        std::string getFirstname(void);
        std::string getLastname(void);
        std::string getNickname(void);
        std::string getPhonenumber(void);
        std::string getdarksecret(void);
};



#endif