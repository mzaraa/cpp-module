#include "Dog.hpp"

/******************************** Constructor & destructor ********************************/

Dog::Dog(): _brain(new Brain())
{
	_type = "Dog";
	std::cout << "[" << BOLD(FMAG("DCTR Dog")) << "] "<< "Default constructor called ~ Dog created" << std::endl;
}

Dog::Dog(Dog const & cpy)
{
	std::cout << "[" << BOLD(FMAG("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << "[" << BOLD(FRED("DSTR Dog")) << "] "<< "Destructor called ~ Dog" << std::endl;
}

	/******************************* Operator oveload ********************************/

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_type = rhs.getType();
	return *this;
}

	/******************************* Dog class member functions   ********************************/

void Dog::makeSound(void) const
{
	std::cout << "Wouaf wouaf !" << std::endl;
}