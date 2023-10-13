# include <iostream>
# include <iomanip>

#include "contact.hpp"

Contact contact;


int		control(std::string name, std::string text)
{
	std::string join;

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
	std::string str;


	while (1)
	{
		std::cout << "Phonebook$ ";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			//Contact  contact;
			std::string first_name;
			std::cout << "First Name-> ";
			std::getline(std::cin, first_name);
			if (control(first_name, "First_name"))
				continue;			
			std::string last_name;
			std::cout << "Last Name-> ";
			std::getline(std::cin, last_name);
			if (control(last_name, "Last_name"))
				continue;
			std::string nickname;
			std::cout << "Nick Name-> ";
			std::getline(std::cin, nickname);
			if (control(nickname, "Nick_name"))
				continue;
			std::string phonenumber;
			std::cout << "Phone_number-> ";
			std::getline(std::cin, phonenumber);
			if (control(phonenumber, "Phone_number"))
				continue;
			std::string darksecret;
			std::cout << "Dark_secret-> ";
			std::getline(std::cin, darksecret);
			if (control(darksecret, "Dark_secret"))
				continue;		
			//std::cout << last_name << std::endl;		

			
		}




		else if (str == "SEARCH")
		{
			std::cout << "arda";
			exit(0);

		}
		else if (str == "EXİT")
		{
			std::cout << "baran";
			exit(0);
		}
	}
	
}
