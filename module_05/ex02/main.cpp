#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
		/********************************* No exceptions part *********************************/
		std::cout << BOLD(FMAG("		/* No exceptions part */")) << std::endl;

	// Test ShrubberyCreationForm
	std::cout << BOLD(FYEL("Test ShrubberyCreationForm should work")) << std::endl;
	try
	{
		Bureaucrat Rox("Rox", 1);
		ShrubberyCreationForm garden("garden");
		garden.beSigned(Rox);
		Rox.executeForm(garden);

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test RobotomyRequestForm
	std::cout << BOLD(FYEL("Test RobotomyRequestForm should work")) << std::endl;
	try
	{
		Bureaucrat Rookie("Rookie", 1);
		RobotomyRequestForm Edward_elric("Edward_elric");
		Edward_elric.beSigned(Rookie);
		Rookie.executeForm(Edward_elric);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test PresidentialPardonForm
	std::cout << BOLD(FYEL("Test PresidentialPardonForm should work")) << std::endl;
	try
	{
		Bureaucrat Tom("Tom", 1);
		PresidentialPardonForm Jerry("Jerry");
		Jerry.beSigned(Tom);
		Tom.executeForm(Jerry);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

		/********************************* Exceptions part *********************************/
		std::cout << BOLD(FMAG("		/* Exceptions part */")) << std::endl;

	std::cout << BOLD(FYEL("Test ShrubberyCreationForm shouldn't work")) << std::endl;
	try
	{
		Bureaucrat Rox("Rox", 140);
		ShrubberyCreationForm garden("garden");
		garden.beSigned(Rox);
		Rox.executeForm(garden);

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test RobotomyRequestForm
	std::cout << BOLD(FYEL("Test RobotomyRequestForm shouldn't work")) << std::endl;
	try
	{
		Bureaucrat Rookie("Rookie", 70);
		RobotomyRequestForm Edward_elric("Edward_elric");
		Edward_elric.beSigned(Rookie);
		Rookie.executeForm(Edward_elric);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test PresidentialPardonForm
	std::cout << BOLD(FYEL("Test PresidentialPardonForm should not works")) << std::endl;
	try
	{
		Bureaucrat Tom("Tom", 20);
		PresidentialPardonForm Jerry("Jerry");
		Jerry.beSigned(Tom);
		Tom.executeForm(Jerry);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
