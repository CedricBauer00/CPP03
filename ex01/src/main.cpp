#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
	std::cout << "Testing ClapTrap" << std::endl;
	ClapTrap	bob("Bob");
	ClapTrap	dave("Dave");

	bob.attack("Dave");
	dave.attack("Bob");
	bob.takeDamage(5);
	bob.beRepaired(3);

	std::cout << "Testing ScavTrap" << std::endl;

	ScavTrap	scavBob("ScavBob");
	ScavTrap	scavDave("ScavDave");
	scavBob.attack("ScavDave");
	scavDave.attack("ScavBob");
	scavBob.takeDamage(20);
	scavDave.takeDamage(20);
	scavBob.beRepaired(13);
	scavDave.beRepaired(14);
	scavDave.guardGate();
	scavBob.guardGate();
	std::cout << "End of tests." << std::endl;
}