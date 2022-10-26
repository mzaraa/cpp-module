#include "ScavTrap.hpp"

/******************************** Constructor & destructor ********************************/

ScavTrap::ScavTrap(std::string const & name): ClapTrap(name)
{
	_hit = 100;
	_energy = 100;
	_attack_dmg = 20;
	std::cout << "[" << BOLD(FGRN("DCTR ScavTrap")) << "] "<< "Default constructor called ~ ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	std::cout << "[" << BOLD(FGRN("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[" << BOLD(FYEL("DSTR ScavTrap")) << "] "<< "Destructor called ~ ScavTrap d" << std::endl;
}

	/******************************* Operator oveload ********************************/

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_attack_dmg = rhs._attack_dmg;
	
	return *this;
}

	/******************************* ScavTrap class member functions   ********************************/

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap enter in Gate keeper mode !" << std::endl;
}