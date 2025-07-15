#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[32mScavTrap has been constructed!\033[0m" << std::endl;
	_hit = 100;
	_energy = 50;
	_attackDmg = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[31mScavTrap has been destructed!\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hit > 0)
	{
		std::cout   << "\033[94mScavTrap " << _name << " attacks "
		<< target << ", causing " << _attackDmg
		<< " damage!\033[0m"
		<< std::endl;
		_energy--;
		return ;
	}
	std::cout << "cannot attack!" << std::endl;
	_energy--;
}


void	ScavTrap::guardGate()
{
	std::cout	<< "\033[96mScavTrap \"" << _name
				<< "\" is now in Gate keeper mode!\033[0m"
				<< std::endl;
}