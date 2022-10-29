#include "WrongCat.hpp"

/******************************** Constructor & destructor ********************************/

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "[" << BOLD(FBLU("DCTR WrongCat")) << "] "<< "Default constructor called ~ WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const & cpy)
{
	std::cout << "[" << BOLD(FBLU("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat()
{
	std::cout << "[" << BOLD(FRED("DSTR WrongCat")) << "] "<< "Destructor called ~ WrongCat" << std::endl;
}

	/******************************* Operator oveload ********************************/

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat ~ Copy assignment operator called" << std::endl;
	if(this == &rhs)
		return *this;
	_type = rhs.getType();
	return *this;
}

	/******************************* WrongCat class member functions   ********************************/

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Miaou miaou !" << std::endl;
}