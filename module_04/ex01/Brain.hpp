#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

	/****************** Class ******************/
class Brain
{
	public:
		Brain(void);
		Brain(Brain const & cpy);
		~Brain(void);
		Brain & operator=(Brain const & rhs);
	private:
		static unsigned int const nb = 100;
		std::string ideas[nb];
};

#endif //BRAIN_HPP