#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include "Animal.hpp"

	/****************** Class ******************/
class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & cpy);
		~WrongAnimal();
		WrongAnimal &operator = (WrongAnimal const & rhs);

		std::string getType(void) const;
		void makeSound(void) const;

	protected:
		std::string _type;
};

#endif // WRONG_ANIMAL_HPP