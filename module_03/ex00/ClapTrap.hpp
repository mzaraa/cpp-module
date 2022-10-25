#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include<cmath>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & cpy);
		ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	private:
		std::string _name;
		int _hit, _energy, _attack_dmg;
};


#endif // CLAPTRAP_HPP