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
	    std::string	phoneNumber;
	    std::string	darkestSecret;

        void    setFirst_name(std::string firstname);
        void    setLast_name(std::string lastname);
        void    setNick_name(std::string nickname);
        void    setPhone_number(std::string phoneNumber);
        void    setDark_secret(std::string darkestSecret);

};



#endif