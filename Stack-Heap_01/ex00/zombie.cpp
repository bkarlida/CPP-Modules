#include "zombie.hpp"

zombie::zombie(std::string name)
{
    this->name = name;
}

void    zombie::setName(std::string name)
{
    this->name = name;
}
std::string zombie::getName()
{
    return(this->name);
}

void    zombie::announce()
{
    std::cout << this->getName() + ": BraiiiiiiinnnzzzZ...\n";
    
}
