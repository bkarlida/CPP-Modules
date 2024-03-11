#include "zombie.hpp"

int	main()
{
	zombie *zombi = newZombie("burak");
	zombi->announce();
	delete zombi;
	random("bilal");
	return (0);
}