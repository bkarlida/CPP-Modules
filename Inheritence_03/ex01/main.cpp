#include "ScavTrap.hpp"



int main(void){
	ScavTrap s("burak");
	s.attack("semih");
	s.beRepaired(1);
	s.takeDamage(15);
	s.guardGate();
	return (0);
}