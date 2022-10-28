#include "FragTrap.hpp"

	/******************************** Constructor & destructor ********************************/

FragTrap::FragTrap(std::string const & name): ClapTrap(name)
{
	_hit = 100;
	_energy = 100;
	_attack_dmg = 20;
	std::cout << "[" << BOLD(FGRN("DCTR FragTrap")) << "] "<< "Default constructor called ~ FragTrap created" << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << "[" << BOLD(FGRN("Copy CTR FragTrap")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << "[" << BOLD(FYEL("DSTR FragTrap")) << "] "<< "Destructor called ~ FragTrap destroyed" << std::endl;
}

	/******************************* Operator oveload ********************************/

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_attack_dmg = rhs._attack_dmg;
	
	return *this;
}

	/******************************* FragTrap class member functions   ********************************/

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me Five ! ✋" << std::endl;
}