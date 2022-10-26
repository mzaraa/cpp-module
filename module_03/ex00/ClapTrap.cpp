#include "ClapTrap.hpp"

/******************************** Constructor & destructor ********************************/

ClapTrap::ClapTrap(): _name("unknow"), _hit(10), _energy(10), _attack_dmg(0)
{
	std::cout << "[" << BOLD(FBLU("DCTR")) << "] "<< "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name): _name(name), _hit(10), _energy(10), _attack_dmg(0)
{
	std::cout << "[" << BOLD(FBLU("CTR")) << "] "<< "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
{
	std::cout << "[" << BOLD(FBLU("CCTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[" << BOLD(FRED("DSTR")) << "] "<< "Destructor called" << std::endl;
}

/******************************* Operator oveload ********************************/

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_attack_dmg = rhs._attack_dmg;
	
	return *this;
}

/******************************* ClapTrap class member functions   ********************************/

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_dmg  << " points of damage! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took " << amount << " damage point! " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " get " << amount << " heal point! " << std::endl;
}

/******************************* getter / setter   ********************************/

std::string ClapTrap::getName(void)
{
	return this->_name;
}

void ClapTrap::setName(std::string new_name)
{
	this->_name = new_name;
}