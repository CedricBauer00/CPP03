#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap	bob("Bob");
	ClapTrap	dave("Dave");

	bob.attack("Dave");
	dave.attack("Bob");
	bob.takeDamage(5);
	bob.beRepaired(3);
}