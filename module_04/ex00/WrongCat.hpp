#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

	/****************** Class ******************/
class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & cpy);
        ~WrongCat();
        WrongCat& operator=(WrongCat const & rhs);

        void makeSound(void) const;
};

#endif // WRONG_CAT_HPP