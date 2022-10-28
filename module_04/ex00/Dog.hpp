#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

	/****************** Class ******************/
class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & cpy);
		~Dog();
		Dog& operator=(Dog const & rhs);

		void makeSound(void) const;
};

#endif // DOG_HPP