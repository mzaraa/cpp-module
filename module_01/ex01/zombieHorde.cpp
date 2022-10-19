#include "Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombies_ptr = new Zombie[N];

	for (int i = 0; i < N ; i++)
		zombies_ptr[i].setName(name);
	return zombies_ptr;
}