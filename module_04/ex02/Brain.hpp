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

		void setIdea(size_t index, std::string const &s);
		std::string const & getIdea(size_t index) const;
	private:
		static unsigned int const nb = 100;
		std::string _ideas[nb];
};

#endif //BRAIN_HPP