#ifndef HARL_HPP
# define HARL_HPP

#include<iostream>
#include<sstream>
#include<string>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		typedef void (Harl::*ptr_level)(void);
};

#endif // HARL_HPP