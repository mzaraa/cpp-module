#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

	/****************** Class ******************/
class Cat: public Animal
{
    public:
        Cat();
        Cat(Cat const & cpy);
        ~Cat();
        Cat& operator=(Cat const & rhs);

        void makeSound(void) const;
};

#endif // CAT_HPP