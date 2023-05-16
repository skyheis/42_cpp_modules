#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void    announce(void) const;
    void    setName(std::string name);

private:

    std::string _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif /* ZOMBIE_HPP */
