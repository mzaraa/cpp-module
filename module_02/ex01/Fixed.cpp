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

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	_nb = n << _fractional_bits;
}

Fixed::Fixed(float const f_nb)
{
	std::cout << "Float constructor called" << std::endl;
	_nb = roundf(f_nb * (1 << _fractional_bits));
	// std::cout << "ICI : " << _nb << "        ICI : " << f_nb << std::endl;
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

	/*
	** We return a reference to a stream each time. In fact, it is the stream that we receive as an argument that is returned. 
	** The purpose of this is to chain calls to the operator to be able to write code such as this.
	** operator<<(operator<<(std::cout, t), std::endl);
	*/
std::ostream & operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();

	return os;
}

/*******************************  Fixed class member functions   ********************************/

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;

	return _nb;
}

void Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

float Fixed::toFloat(void) const
{
	return (float)_nb / (1 << _fractional_bits);
}

int Fixed::toInt(void) const
{
	return toFloat();
}