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
		/*       pre increment     */
		Fixed & operator++();
		Fixed & operator--();
		/*       post increment    */
		Fixed	operator++(int);
		Fixed	operator--(int);
		/*       Comparison operators    */
		bool	operator==(Fixed const &rhs);
		bool	operator>=(Fixed const &rhs);
		bool	operator<=(Fixed const &rhs);
		bool	operator>(Fixed const &rhs);
		bool	operator<(Fixed const &rhs);
		bool	operator!=(Fixed const &rhs);
		/*       Binary arithmetic operators    */
		float operator+(Fixed const &rhs)const;
		float operator-(Fixed const &rhs)const;
		float operator*(Fixed const &rhs)const;
		float operator/(Fixed const &rhs)const;

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &obj1, Fixed &obj2);
		static Fixed const &min(Fixed const &obj1, Fixed const &obj2);
		static Fixed &max(Fixed &obj1, Fixed &obj2);
		static Fixed const &max(Fixed const &obj1, Fixed const &obj2);

	private:
		int _nb;
		static const int _fractional_bits = 8;
};

std::ostream & operator<<(std::ostream &os, Fixed const &rhs);

#endif 		// FIXED_HPP