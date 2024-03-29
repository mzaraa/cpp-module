#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _nb;
		static const int _fractional_bits = 8;
};

#endif // FIXED_HPP