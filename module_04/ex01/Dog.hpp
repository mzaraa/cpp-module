#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

	/****************** Class ******************/
class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & cpy);
		virtual ~Dog();
		Dog & operator=(Dog const & rhs);

		void makeSound(void) const;
		Brain *getBrainValue();

	private:
		Brain* _brain;
};

#endif // DOG_HPP