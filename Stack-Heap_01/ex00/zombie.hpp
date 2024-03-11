#ifndef ZOMBİE_HPP
#define ZOMBİE_HPP

#include <iostream>


class zombie
{
    private: 
        std::string name;
    public:
        zombie(std::string name);

        void setName(std::string name);
        std::string getName(void);
        void announce(void);
   
};

void random(std::string name);
zombie* newZombie(std::string name);

#endif