#include "Brain.hpp"
	/******************************** Constructor & destructor ********************************/
Brain::Brain(void)
{
	std::cout << "[" << BOLD(FBLU("DCTR")) << "] "<< " Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& ref)
{
	std::cout << "[" << BOLD(FBLU("DCTR")) << "] "<< " Brain Copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "[" << BOLD(FRED("DSTR")) << "] "<< " Brain Destructor called" << std::endl;
}

	/******************************* Operator oveload ********************************/
Brain & Brain::operator=(const Brain & ref)
{
	return *this;
}
