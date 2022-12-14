#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

	/****************** Class ******************/
class Intern
{
	public:
		Intern(void);
		Intern(Intern const & cpy);
		~Intern(void);
		Intern & operator=(Intern const & rhs);

		Form *Presidential(std::string const target);
		Form *Robotomy(std::string const target);
		Form *Shrubberry(std::string const target);

		Form *makeForm(std::string const & Form_name, std::string const & target);

	private:
		struct Entries{
			std::string const entrie;
			Form* (Intern::*f)(std::string const target);
		};
		static Entries const dict[];
};

#endif // INTERN_H