#include "Zombie.hpp"

int	main(void)
{
	try
	{
		Zombie *h_zombie = newZombie("Heap_Zombie");
		h_zombie->annonce();
		delete h_zombie;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Allocation failed :" << e.what() << '\n';
	}
	randomChump("Stack_Zombie");
	return 0;
}