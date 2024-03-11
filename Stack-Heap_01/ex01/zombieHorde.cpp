
#include "zombie.hpp"

zombie* zombieHorde(int N, std::string name)
{
	zombie *zombieHorde = new zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
