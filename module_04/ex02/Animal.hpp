#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include "Brain.hpp"

	/****************** Colors ******************/

#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

	/****************** Class ******************/
class Animal
{
	public:
		Animal();
		Animal(Animal const & cpy);
		virtual ~Animal();
		Animal & operator=(Animal const & rhs);

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
	protected:
		std::string _type;
};

#endif // ANIMAL_HPP