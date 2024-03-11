#include "zombie.hpp"

zombie* newZombie(std::string name)
{

	zombie *zombi = new zombie(name);
	return (zombi);
}