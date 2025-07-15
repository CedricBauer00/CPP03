#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "\033[32mClapTrap \"" << name << "\" has been constructed.\033[0m" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "\033[38;5;196mClapTrap \"" << _name << "\" has been destructed.\033[0m" << std::endl; }

void ClapTrap::attack(const std::string& target)
{

    if (_energy > 0 && _hit > 0)
    {
        std::cout   << "\033[93mClapTrap " << _name << " attacks "
        << target << ", causing " << _attackDmg
        << " points of damage!\033[0m"
        << std::endl;
        _energy--;
        return ;
    }
    std::cout << "cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout   << "\033[38;5;214mClapTrap " << _name <<" takes "
                << amount << " points of damage!	\033[0m"
                << std::endl;
    _hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout   << "\033[92mClapTrap " << _name
                << " repairs itself for " << amount
                << " hit points!\033[0m"
                << std::endl;
    _hit += amount;
    _energy--;
}