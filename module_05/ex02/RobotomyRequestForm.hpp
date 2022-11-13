#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <string>
# include "Form.hpp"
	/****************** Class ******************/
class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const & target = "target");
		RobotomyRequestForm(RobotomyRequestForm const & cpy); 
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		void action() const;

	private:
		std::string _target;
};

#endif	// ROBOTOMY_REQUEST_FORM_HPP