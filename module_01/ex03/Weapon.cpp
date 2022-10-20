#include "Weapon.hpp"

Weapon::Weapon(std::string const &weapon): _type(weapon) {};

Weapon::~Weapon()
{
}

std::string const &Weapon::getType(void)
{
	return _type;
}

void Weapon::setType(std::string new_type)
{
	_type = new_type;
}
