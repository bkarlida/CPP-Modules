#include "contact.hpp"

void    Contact::setFirst_name(std::string text)
{
    this->firstname = text;
}
void    Contact::setLast_name(std::string text)
{
    this->lastname = text;
}
void    Contact::setNick_name(std::string text)
{
    this->nickname = text;
}
void    Contact::setPhone_number(std::string text)
{
    this->phonenumber = text;
}
void    Contact::setDark_secret(std::string text)
{
    this->darksecret = text;
}
std::string	Contact::getFirstname(void)
{
	return (this->firstname);
}

std::string	Contact::getLastname(void)
{
	return (this->lastname);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

std::string Contact::getPhonenumber(void)
{
	return (this->phonenumber);
}

std::string	Contact::getDarksecret(void)
{
	return (this->darksecret);
}