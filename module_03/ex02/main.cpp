#include "FragTrap.hpp"

using std::endl;
using std::cout;

int main (void)
{
	/* test constructor with name */
	std::cout << BOLD(FYEL("Test constructor with name")) << std::endl;
	FragTrap constructor_name("FragTrap_PREMIER");
	FragTrap other_constructor_name("FragTrap_SECOND");
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

	/* test member HighFivesGuys function */
	std::cout << BOLD(FYEL("Test member HighFivesGuys() function")) << std::endl;
	constructor_name.highFivesGuys();
	other_constructor_name.highFivesGuys();
	std::cout << std::endl;

	// test overload of assignment operator
	std::cout << BOLD(FYEL("Test overload of assignment operator")) << std::endl;
	other_constructor_name = constructor_name;
	std::cout << std::endl;

	std::cout << BOLD(FYEL("Destructor")) << std::endl;
	
	return 0;
}