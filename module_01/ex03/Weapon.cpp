#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

std::string& const Weapon::getType(void)
{
	return _type;
}

void Weapon::setType(std::string & new_type)
{
	_type = new_type;
}
