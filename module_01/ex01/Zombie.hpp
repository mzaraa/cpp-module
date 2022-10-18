#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include<iomanip>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void annonce(void);
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP