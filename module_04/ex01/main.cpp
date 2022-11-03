#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define N_ANIMALS 10

int main (void)
{
	// /* test constructor Animal - Dog - Cat */
	// std::cout << BOLD(FYEL("Test constructor Animal - Dog - Cat")) << std::endl;
	// const Animal* animal = new Animal();
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();
	// std::cout << std::endl;

	// /* test makesound member function get from each obj */
	// std::cout << BOLD(FYEL("makesound member function")) << std::endl;
	// cat->makeSound();
	// dog->makeSound();
	// animal->makeSound();
	// std::cout << std::endl;

	// /* check type for eache obj */
	// std::cout << BOLD(FYEL("Test check _type for each obj")) << std::endl;
	// std::cout << "dog _type ~> " << dog->getType() << " " << std::endl;
	// std::cout << "cat _type ~> " << cat->getType() << " " << std::endl;
	// std::cout << std::endl;

	// std::cout << BOLD(FYEL("Destructor")) << std::endl;
	// delete cat;
	// delete dog;
	// delete animal;
	// std::cout << std::endl;

	// /* test wrong animal */
	// std::cout << BOLD(FYEL("Test constructor WrongAnimal - WrongCat")) << std::endl;
	// const WrongAnimal* wronganimal = new WrongAnimal();
	// const WrongAnimal* wrongcat = new WrongCat();
	// std::cout << std::endl;

	// /* test makesound member function get from each obj */
	// std::cout << BOLD(FYEL("makesound member function")) << std::endl;
	// wrongcat->makeSound();
	// wronganimal->makeSound();
	// std::cout << std::endl;

	// /* check type for eache obj */
	// std::cout << BOLD(FYEL("Test check the obj _type")) << std::endl;
	// std::cout << "cat _type ~> " << wrongcat->getType() << " " << std::endl;
	// std::cout << std::endl;
	
	// std::cout << BOLD(FYEL("Destructor")) << std::endl;
	// delete wronganimal;
	// delete wrongcat;


Animal	*animals[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 10; ++i)
		delete animals[i];

	std::cout << std::endl;
	Cat	cat1;
	Cat cat2;
	cat2.getBrain()->setIdea(1, "Barev");
	cat1 = cat2;
	std::cout << cat1.getBrain()->getIdea(1) << " - from cat 1" << std::endl;
	std::cout << cat2.getBrain()->getIdea(1) << " - from cat 2" << std::endl;
	std::cout << "deep copy worked" << std::endl;
	cat2.getBrain()->setIdea(1, "coco");
	std::cout << cat1.getBrain()->getIdea(1) << " - from cat 1" << std::endl;
	std::cout << cat2.getBrain()->getIdea(1) << " - from cat 2" << std::endl;
	std::cout << std::endl;

	Dog	basic;
	Dog	tmp = basic;
	return 0;
}