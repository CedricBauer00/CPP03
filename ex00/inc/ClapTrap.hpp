#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hit = 10;
    unsigned int    _energy = 10;
    unsigned int    _attackDmg = 0;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};


#endif