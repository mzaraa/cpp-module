#include "Intern.hpp"

	/******************************** Constructor & destructor ********************************/
Intern::Intern(){}

Intern::Intern(const Intern & cpy) { (void)cpy;}

Intern::~Intern() {}

	/******************************* Operator oveload ********************************/
Intern & Intern::operator=(const Intern & cpy) { (void)cpy; return *this;}


Intern::Entries const Intern::dict[] = {
	{"presidential pardon", &Intern::Presidential},
	{"robotimy request", &Intern::Robotomy},
	{"shrubbery creation", &Intern::Shrubberry}
};

Form *Intern::Presidential(std::string const target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::Robotomy(std::string const target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::Shrubberry(std::string const target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string const & Form_name, std::string const & target)
{
	for (int i = 0; i < 3; i++)
		if (dict[i].entrie == Form_name)
			return (this->*(dict[i].f))(target);
	std::cerr << Form_name << "is not valid Form";
	return 0;
}