#include "Dog.hpp"

/******************************** Constructor & destructor ********************************/

Dog::Dog(): _brain(new Brain())
{
	_type = "Dog";
	std::cout << "[" << BOLD(FBLU("DCTR Dog")) << "] "<< "Default constructor ~ Dog" << std::endl;
}

Dog::Dog(Dog const & cpy)
{
	std::cout << "[" << BOLD(FMAG("Copy CTR")) << "] "<< "Copy constructor" << std::endl;
	_brain = new Brain();
	*this = cpy;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "[" << BOLD(FRED("DSTR Dog")) << "] "<< "Destructor ~ Dog" << std::endl;
}

	/******************************* Operator oveload ********************************/

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog ~ Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	_type = rhs.getType();
	*_brain = *(rhs._brain);
	return *this;
}

	/******************************* Dog class member functions   ********************************/

void Dog::makeSound(void) const
{
	std::cout << "Wouaf wouaf !" << std::endl;
}

Brain		*Dog::getBrainValue()
{
	return _brain;
}
