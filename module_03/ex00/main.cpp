#include "ClapTrap.hpp"

int main (void)
{
	/* test default constructor */
	std::cout << BOLD(FYEL("Test default constructor")) << std::endl;
	ClapTrap default_constructor;
	std::cout << std::endl;

	/* test constructor with name */
	std::cout << BOLD(FYEL("Test constructor with name")) << std::endl;
	ClapTrap constructor_name("Named_constructor");
	ClapTrap other_constructor_name("Other_named_constructor");
	std::cout << std::endl;

	/* test attack member function */
	std::cout << BOLD(FYEL("Test attack() member function")) << std::endl;
	default_constructor.attack(constructor_name.getName());
	constructor_name.attack(other_constructor_name.getName());
	other_constructor_name.attack(default_constructor.getName());
	std::cout << std::endl;

	/* test  member beRepaired function */
	std::cout << BOLD(FYEL("Test member beRepaired() function")) << std::endl;
	default_constructor.beRepaired(15);
	constructor_name.beRepaired(10);
	other_constructor_name.beRepaired(5);
	std::cout << std::endl;

	// test overload of assignment operator
	std::cout << BOLD(FYEL("Test overload of assignment operator")) << std::endl;
	default_constructor = constructor_name;
	other_constructor_name = constructor_name;
	std::cout << std::endl;

	std::cout << BOLD(FYEL("Destructor")) << std::endl;
	return 0;
}