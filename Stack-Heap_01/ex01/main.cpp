
#include "zombie.hpp"

int	main(void)
{
	zombie* zombies = zombieHorde(3, "burak");
	
	for (int i = 0; i < 3; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
