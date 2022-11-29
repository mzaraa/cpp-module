#include <iostream>
#include <stdexcept>
#include "Form.hpp"

int main(void)
{
	// test no exception throw
	std::cout << BOLD(FYEL("No exception")) << std::endl;
	try
	{
		Bureaucrat Rox("Rox", 10);
		Form vente("Vente_maison", 140, 10);
		vente.beSigned(Rox);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	// test exception throw -> bureaucrate grade's too low
	std::cout << BOLD(FYEL("Bureaucrate grade's too low")) << std::endl;
	try
	{
		Bureaucrat Rookie("Rookie", 140);
		Form vente("Vente_maison", 10, 10);
		vente.beSigned(Rookie);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	// test exception throw -> grade too low
	std::cout << BOLD(FYEL("Bad Form init (GradeTooLowException)")) << std::endl;
	try
	{
		Bureaucrat Rookie("Rookie", 140);
		Form vente("Vente_maison", 160, 10);
		vente.beSigned(Rookie);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	// test exception throw -> grade too high
	std::cout << BOLD(FYEL("Bad Form init (GradeTooHighException)")) << std::endl;
	try
	{
		Bureaucrat Rookie("Rookie", 140);
		Form vente("Vente_maison", -10, 10);
		vente.beSigned(Rookie);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	return 0;
}
