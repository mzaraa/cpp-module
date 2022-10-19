#ifndef WEAPON_H
# define WEAPON_H

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include<iomanip>

class Weapon
{
	public:
		Weapon(/* args */);
		~Weapon();
		std::string& const getType();
		void setType(std::string & new_type);
	private:
		std::string _type;
};


#endif // WEAPON_H