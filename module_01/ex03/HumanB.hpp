#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &new_weapon);
	private:
		std::string	_name;
		Weapon		*_ptr_weapon;
};


#endif // HUMANB_H