#include "Brain.hpp"
	/******************************** Constructor & destructor ********************************/
Brain::Brain(void)
{
	//std::cout << "[" << BOLD(FBLU("DCTR Brain")) << "] "<< "Default constructor ~ Brain" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	//std::cout << "[" << BOLD(FMAG("DCTR")) << "] "<< "Copy constructor" << std::endl;
	*this = cpy;
}

Brain::~Brain(void)
{
	std::cout << "[" << BOLD(FRED("DSTR Brain")) << "] "<< "Destructor ~ Brain" << std::endl;
}

	/******************************* Operator oveload ********************************/
Brain & Brain::operator=(const Brain & ref)
{
	std::cout << "Brain ~ Copy assignment operator called" << std::endl;
	if (this == &ref)
		return *this;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ref._ideas[i];

	return *this;
}

void Brain::setIdea(size_t index, std::string const &s)
{
	_ideas[index] = s;
}

std::string const & Brain::getIdea(size_t index) const
{
	return _ideas[index];
}