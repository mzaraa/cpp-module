#include "ClapTrap.hpp"

/******************************** Constructor & destructor ********************************/

ClapTrap::ClapTrap(): _name("unknow"), _hit(10), _energy(10), _attack_dmg(0)
{
	std::cout << "[" << BOLD(FBLU("DCTR ClapTrap")) << "] "<< "Default constructor called ~ ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name): _name(name), _hit(10), _energy(10), _attack_dmg(0)
{
	std::cout << "[" << BOLD(FBLU("CTR ClapTrap")) << "] "<< "Constructor called ~ ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
{
	std::cout << "[" << BOLD(FBLU("Copy CTR ClapTrap")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[" << BOLD(FRED("DSTR ClapTrap")) << "] "<< "Destructor called ~ ClapTrap destroyed" << std::endl;
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
	std::cout << _name << " attacks " << target << ", causing " << _attack_dmg  << " points of damage! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " took " << amount << " damage point! " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout <<  _name << " get " << amount << " heal point! " << std::endl;
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