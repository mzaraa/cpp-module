#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form("RobotomyRequestForm", 5, 25), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy)
{
	*this = cpy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action() const
{
	int	b = rand() % 100 + 1;
	if (b % 2)
		std::cout << "BRZZZ !! " << _target << " has been robotomised." << std::endl;
	else
		std::cout << "Robotomization failed..." << std::endl;
}