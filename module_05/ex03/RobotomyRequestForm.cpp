#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form("RobotomyRequestForm", 45, 72), _target(target)
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
	std::srand(std::time(0)); //use current time as seed for random generator
	if ((std::rand() % 2) == 0)
		std::cout << "BRZZZ !! " << _target << " has been robotomised." << std::endl;
	else
		std::cout << "Robotomization failed..." << std::endl;
}