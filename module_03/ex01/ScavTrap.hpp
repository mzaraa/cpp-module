#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string const & name = "unknow ScavTrap");
		ScavTrap(ScavTrap const & cpy);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap();

		void guardGate();
	private:
		
};


#endif // SCAVTRAP_HPP