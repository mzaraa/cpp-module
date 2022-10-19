#include "Zombie.hpp"

int main(int ac, char** av)
{
	unsigned int	N;
	std::string name;
	if (ac != 3)
	{
		std::cerr <<  "Error : ./a.out number_of_Zombie Zombies'_name\n";
		return 1;
	}
	else if (!*av[1] || !*av[2])
	{
		std::cerr << "Error : Bad args\n";
		return 1;
	}
	else
	{
		std::stringstream ss; 
		ss << av[1];
		ss >> N;
		if (!N)
		{
			std::cerr << "Error : Not an integer !";
			return 1;
		}
		try
		{
			Zombie* horde = zombieHorde(N, std::string(av[2]));
			for (unsigned int i = 0; i < N; i++)
				horde[i].annonce();
			delete [] horde;
		}
		catch(const std::bad_alloc& e)
		{
			std::cerr << e.what() << '\n';
			return 1;
		}
	}
	return 0;
}