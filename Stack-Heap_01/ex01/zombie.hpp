#ifndef ZOMBİE_HPP
#define ZOMBİE_HPP

#include <iostream>


class zombie
{
    private: 
        std::string name;
    public:
		zombie();
        zombie(std::string name);
        void setName(std::string name);
        std::string getName(void);
        void announce(void);
   
};
zombie* zombieHorde(int N, std::string name);

#endif