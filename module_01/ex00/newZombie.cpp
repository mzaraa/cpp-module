#include "Zombie.hpp"

	/*
	** Allocates size bytes of storage, suitably aligned to represent any object of that size, 
	** and returns a non-null pointer to the first byte of this block.
	** On failure, it throws a bad_alloc exception.
	*/
Zombie*	newZombie(std::string name)
{
	return new Zombie(name);
}
