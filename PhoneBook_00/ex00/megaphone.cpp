#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	int i = 1;	
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(1);
	}
	int k = 0;
	while (av[i])
	{
		k = 0;	
		while (av[i][k])
		{
			std::cout << (char)toupper(av[i][k]);
			k++;
		}
		i++;
	}
}
