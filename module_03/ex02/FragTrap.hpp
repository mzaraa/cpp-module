#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const & name = "unknow FragTrap");
		FragTrap(FragTrap const & cpy);
		FragTrap& operator=(FragTrap const &rhs);
		~FragTrap();

		void highFivesGuys(void);
	private:

};

#endif // FRAGTRAP_HPP