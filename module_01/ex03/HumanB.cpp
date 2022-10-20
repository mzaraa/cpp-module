#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _ptr_weapon(0){};

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
	if(_ptr_weapon)
		std::cout << _name << " attack with his " << (*_ptr_weapon).getType() << std::endl;
	else 
		std::cout << _name << " attack with his hands" << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	if (std::isalpha(new_weapon.getType()[0]))
		_ptr_weapon = &new_weapon;
}