#include "Cat.hpp"

/******************************** Constructor & destructor ********************************/

Cat::Cat(): _brain(new Brain())
{
	_type = "Cat";
	std::cout << "[" << BOLD(FBLU("DCTR Cat")) << "] "<< "Default constructor ~ Cat" << std::endl;
}

Cat::Cat(Cat const & cpy)
{
	std::cout << "[" << BOLD(FMAG("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	_brain = new Brain();
	*this = cpy;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "[" << BOLD(FRED("DSTR Cat")) << "] "<< "Destructor ~ Cat" << std::endl;
}

	/******************************* Operator oveload ********************************/

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat ~ Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	_type = rhs.getType();
	*_brain = *(rhs._brain);
	return *this;
}

	/******************************* Cat class member functions   ********************************/

void Cat::makeSound(void) const
{
	std::cout << "Miaou miaou !" << std::endl;
}

Brain		*Cat::getBrainValue()
{
	return (_brain);
}
