#include "Cat.hpp"

/******************************** Constructor & destructor ********************************/

Cat::Cat(): _brain(new Brain())
{
	_type = "Cat";
	std::cout << "[" << BOLD(FBLU("DCTR Cat")) << "] "<< "Default constructor called ~ Cat created" << std::endl;
}

Cat::Cat(Cat const & cpy)
{
	std::cout << "[" << BOLD(FBLU("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

Cat::~Cat()
{
	std::cout << "[" << BOLD(FRED("DSTR Cat")) << "] "<< "Destructor called ~ Cat" << std::endl;
}

	/******************************* Operator oveload ********************************/

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_type = rhs.getType();
	return *this;
}

	/******************************* Cat class member functions   ********************************/

void Cat::makeSound(void) const
{
	std::cout << "Miaou miaou !" << std::endl;
}