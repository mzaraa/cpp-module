#include "WrongAnimal.hpp"

/******************************** Constructor & destructor ********************************/

WrongAnimal::WrongAnimal(): _type("default")
{
	std::cout << "[" << BOLD(FGRN("DCTR WrongAnimal")) << "] "<< "Default constructor called ~ WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy)
{
	std::cout << "[" << BOLD(FGRN("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[" << BOLD(FRED("DSTR WrongAnimal")) << "] "<< "Destructor called ~ WrongAnimal" << std::endl;
}

	/******************************* Operator oveload ********************************/

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_type = rhs.getType();
	return *this;
}

	/******************************* WrongAnimal class member functions   ********************************/

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimals sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return _type;
}