#include "ClapTrap.hpp"


int main()
{
	ClapTrap clap1("burak");
	clap1.takeDamage(9);
	clap1.beRepaired(1);
	ClapTrap clap2(clap1);
	clap2.attack("karlıdağ");
	clap2.takeDamage(11);
	clap2.beRepaired(1);
}