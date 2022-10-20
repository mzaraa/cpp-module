#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _ref_weapon(weapon){};

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << _name << " attack with his " << _ref_weapon.getType() << std::endl;
}