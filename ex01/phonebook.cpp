#include "phonebook.hpp"

void	Phonebook::addContact(Contact contact, int index)
{
	this->contacts[index] = contact;
}

void	Phonebook::printContact(int id)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkSecret;

	firstName = this->contacts[id - 1].getFirstname();
	lastName = this->contacts[id - 1].getLastname();
	nickName = this->contacts[id - 1].getNickname();
	phoneNumber = this->contacts[id - 1].getPhonenumber();
	darkSecret = this->contacts[id - 1].getDarksecret();
	std::cout << "firstname: " << firstName << std::endl;
	std::cout << "lastName: " << lastName << std::endl;
	std::cout << "nickName: " << nickName << std::endl;
	std::cout << "phoneNumber: " << phoneNumber << std::endl;
	std::cout << "darkSecret: " << darkSecret << std::endl;
}

void	Phonebook::printList(void)
{
	int	i;

	i = 0;
	while (this->contacts[i].getFirstname() != "")
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		if (this->contacts[i].getFirstname().length() > 10)
			std::cout << this->contacts[i].getFirstname().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].getFirstname() << "|";
		if (this->contacts[i].getLastname().length() > 10)
			std::cout << this->contacts[i].getLastname().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].getLastname() << "|";
		if (this->contacts[i].getNickname().length() > 10)
			std::cout << this->contacts[i].getNickname().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].getNickname() << "|" << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}