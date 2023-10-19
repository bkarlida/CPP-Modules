#include "phonebook.hpp"

Contact contact;

int		control(std::string name, std::string text)
{
	std::string join;
	std::cout << text + "-> ";
	std::getline(std::cin, name);
	if (name == "\0")
	{
		std::cout << "Please enter your " + text << std::endl;
		return(1);
	}
	join = "set" + text;
	if (join == "setFirst_name")
		contact.setFirst_name(name);
	else if (join == "setLast_name")
		contact.setLast_name(name);
	else if (join == "setNick_name")
		contact.setNick_name(name);
	else if (join == "setPhone_number")
		contact.setPhone_number(name);
	else if (join == "setDark_secret")
		contact.setDark_secret(name);
	return(0);
}

int main(void)
{
	Phonebook phonebook;
	std::string str;
	std::string id;
	int index = 0;

	while (1)
	{
		std::cout << "Phonebook$ ";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			std::string first_name;
			if (control(first_name, "First_name"))
				continue;			
			std::string last_name;
			if (control(last_name, "Last_name"))
				continue;
			std::string nickname;
			if (control(nickname, "Nick_name"))
				continue;
			std::string phonenumber;
			if (control(phonenumber, "Phone_number"))
				continue;
			std::string darksecret;
			if (control(darksecret, "Dark_secret"))
				continue;
			phonebook.addContact(contact, index);
			index++;
			if (index == 8)
				index = 0;
		}
		else if (str == "SEARCH")
		{
			std::cout << "|   Index  |First Name| LastName | NickName |" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			phonebook.printList();
			std::cout << "Enter id of contact -> ";
			std::getline(std::cin, id);
			if (id == "")
			{
				std::cout << "Id can not be empty!" << std::endl;
				continue;
			}
			else if (!isdigit(id[0]))
			{
				std::cout << "Id must be a number!" << std::endl;
				continue;
			}
			else if (std::stoi(id) < 1 || std::stoi(id) > 8)
			{
				std::cout << "Id must be betweeen 1 and 8!" << std::endl;
				continue;
			}
			phonebook.printContact(std::stoi(id));
		}
		else if (str == "EXİT")
			return(0);
	}
}
