#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include<cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const n);
		Fixed(float const f_nb);
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _nb;
		static const int _fractional_bits = 8;
};

std::ostream & operator<<(std::ostream &os, Fixed const &rhs);

#endif // FIXED_HPP