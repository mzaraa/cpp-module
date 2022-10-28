#include "Animal.hpp"

/******************************** Constructor & destructor ********************************/

Animal::Animal(): _type("default")
{
	std::cout << "[" << BOLD(FGRN("DCTR Animal")) << "] "<< "Default constructor called ~ Animal created" << std::endl;
}

Animal::Animal(Animal const & cpy)
{
	std::cout << "[" << BOLD(FGRN("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

Animal::~Animal()
{
	std::cout << "[" << BOLD(FRED("DSTR Animal")) << "] "<< "Destructor called ~ Animal" << std::endl;
}

	/******************************* Operator oveload ********************************/

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_type = rhs.getType();
	return *this;
}

	/******************************* Animal class member functions   ********************************/

void Animal::makeSound(void) const
{
	std::cout << "Animals sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return _type;
}