#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <string>
# include "Form.hpp"

	/****************** Class ******************/
class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const & target = "target");
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		
		void action() const;

	private:
		std::string _target;
};

#endif	// SHRUBBERY_CREATION_FORM_HPP