#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include "Base.hpp"

Base* generate(void)
{
	int random = std::rand() % 3;

	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "The class actual type : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The class actual type : B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "The class actual type : C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "The class actual type : A" << std::endl;
		static_cast<void>(a);
		return;
	}
	catch (std::bad_cast& e) {}

	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "The class actual type : B" << std::endl;
		static_cast<void>(b);
		return;
	}
	catch (std::bad_cast& e) {}

	try 
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "The class actual type : C" << std::endl;
		static_cast<void>(c);
		return;
	}
	catch (std::bad_cast& e) {}

	std::cout << "Unknown" << std::endl;
}

int main(void)
{
	std::srand(std::time(0));

	Base* p = generate();
	identify(p);
	identify(*p);

	Base* base = new Base;
	identify(base);
	identify(*base);

	delete p;
	delete base;
	return 0;
}
