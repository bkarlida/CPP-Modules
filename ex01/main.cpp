# include <iostream>
# include <iomanip>

int main(void)
{
	std::string str;


	while (1)
	{
		std::cout << "giriniz -->>  ";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			std::cout << "burak";
			exit(0);
		}
		else if (str == "SEARCH")
		{
			std::cout << "arda";
			exit(0);

		}
		else if (str == "EXIT")
		{
			std::cout << "baran";
			exit(0);
		}
	}
	
}
