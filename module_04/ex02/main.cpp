#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main (void)
{
	// Animal a;
	Cat b;
	Dog c;
	
	Animal *animal = &b;
	animal->makeSound();
	animal = &c;
	animal->makeSound();
	return 0;
}