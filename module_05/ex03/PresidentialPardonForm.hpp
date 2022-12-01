#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

	/****************** Class ******************/
class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const & target = "target");
		PresidentialPardonForm(PresidentialPardonForm const & cpy); 
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		void action() const;

	private:
		std::string _target;
};

#endif	// PRESIDENTIAL_PARDON_FORM_HPP