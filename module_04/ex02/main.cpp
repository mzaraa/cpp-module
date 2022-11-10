#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

	/*
	** To use dynamic_cast<type *>(ptr) the base class should contain at least one virtual function.
	** ref : https://stackoverflow.com/questions/2253168/dynamic-cast-and-static-cast-in-c
	
	** Shallow copy : When a value inside an address (in the heap) is modified, it will be modified in all instance that point on it.
	** Deep copy : Each instance have their own allocated memory !
	** ref https://stackoverflow.com/questions/184710/what-is-the-difference-between-a-deep-copy-and-a-shallow-copy
	*/

int main (void)
{
	//Animal error_compilation;

	Animal **animals = new Animal*[8];
	
	for (int i = 0; i < 8; i++)
	{
		if (i<4)
			animals[i] = new Dog();
		else
			animals[i] = new Cat(); 
	}

	/* test deep copy dog */
	std::cout << BOLD(FYEL("Instance created to test deep copy")) << std::endl;
	Dog *Rox = dynamic_cast<Dog *>(animals[0]);
	Dog Rookie = *Rox;

	Dog & Rox_ref = *Rox;
	Dog & Rookie_ref = Rookie;
	std::cout << std::endl;

	/* check type for eache obj */
	std::cout << BOLD(FYEL("Deep copy")) << std::endl;
	std::cout << "Rox_ref address : " << &Rox_ref << std::endl;
	std::cout << "Rookie_ref address : " << &Rookie_ref << std::endl;
	std::cout << std::endl;
	std::cout << FBLU("        Rox_ref ideas ") << "         |    " << FBLU("          Rookie_ref ideas") << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << " " << &Rox_ref.getBrainValue()->getIdea(i) << "   " << Rox_ref.getBrainValue()->getIdea(i) << "  |   " 
		<< &Rookie_ref.getBrainValue()->getIdea(i) << "   " << Rookie_ref.getBrainValue()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;

	/* test deep copy cat*/
	std::cout << BOLD(FYEL("Instance created to test deep copy")) << std::endl;
	Cat *Garfield = dynamic_cast<Cat *>(animals[7]);
	Cat Tom = *Garfield;

	Cat & Garfield_ref = *Garfield;
	Cat & Tom_ref = Tom;
	std::cout << std::endl;

	/* check type for eache obj */
	std::cout << BOLD(FYEL("Deep copy")) << std::endl;
	std::cout << "Garfield_ref address : " << &Garfield_ref << std::endl;
	std::cout << "Tom_ref address : " << &Tom_ref << std::endl;
	std::cout << std::endl;
	std::cout << FBLU("        Garfield_ref ideas ") << "         |    " << FBLU("          Rookie_ref ideas") << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << " " << &Garfield_ref.getBrainValue()->getIdea(i) << "   " << Garfield_ref.getBrainValue()->getIdea(i) << "  |   " 
		<< &Tom_ref.getBrainValue()->getIdea(i) << "   " << Tom_ref.getBrainValue()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		delete animals[i];
	delete [] animals;
	return 0;
}
