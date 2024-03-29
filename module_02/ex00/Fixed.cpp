#include "Fixed.hpp"

/******************************** Constructor & destructor ********************************/

Fixed::Fixed(void): _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*******************************  Operator oveload   ********************************/

	/*
	** Operator overload (surcharge de l'operateur = )
	** it using on the current instance > *this (lhs) | and the reference on another instance (rhs)
	** *this > left hand side | Fixed const &rhs > right hand side
	** return a ref to the object this after this one became the same as rhs
	** return type Fixed &  mean "don't make a copy and instead return the same object"
	*/
Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		_nb = rhs.getRawBits();

	return *this;
}

/*******************************  Fixed class member functions   ********************************/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return _nb;
}

void Fixed::setRawBits(int const raw)
{
	_nb = raw;
}
