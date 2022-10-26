#include "ScavTrap.hpp"

using std::endl;
using std::cout;

int main (void)
{
	/* test constructor with name */
	std::cout << BOLD(FYEL("Test constructor with name")) << std::endl;
	ScavTrap constructor_name("ScavTrap_PREMIER");
	ScavTrap other_constructor_name("ScavTrap_SECOND");
	std::cout << std::endl;

	/* test attack member function get from ClapTrap */
	std::cout << BOLD(FYEL("Test attack() member function")) << std::endl;
	constructor_name.attack(other_constructor_name.getName());
	std::cout << std::endl;

	/* test member beRepaired function get from ClapTrap */
	std::cout << BOLD(FYEL("Test member beRepaired() function")) << std::endl;
	constructor_name.beRepaired(10);
	other_constructor_name.beRepaired(5);
	std::cout << std::endl;

	/* test member guardGate function */
	std::cout << BOLD(FYEL("Test member guardGate function")) << std::endl;
	constructor_name.guardGate();
	other_constructor_name.guardGate();
	std::cout << std::endl;

	// test overload of assignment operator
	std::cout << BOLD(FYEL("Test overload of assignment operator")) << std::endl;
	other_constructor_name = constructor_name;
	std::cout << std::endl;

	std::cout << BOLD(FYEL("Destructor")) << std::endl;
	
	return 0;
}