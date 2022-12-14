#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	// 	/********************************* No exceptions part *********************************/
	// 	std::cout << BOLD(FMAG("		/* No exceptions part */")) << std::endl;

	// // Test ShrubberyCreationForm
	// std::cout << BOLD(FYEL("Test ShrubberyCreationForm should work")) << std::endl;
	// try
	// {
	// 	Bureaucrat Rox("Rox", 1);
	// 	ShrubberyCreationForm garden("garden");
	// 	garden.beSigned(Rox);
	// 	Rox.executeForm(garden);

	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl;

	// // Test RobotomyRequestForm
	// std::cout << BOLD(FYEL("Test RobotomyRequestForm should work")) << std::endl;
	// try
	// {
	// 	Bureaucrat Rookie("Rookie", 1);
	// 	RobotomyRequestForm Edward_elric("Edward_elric");
	// 	Edward_elric.beSigned(Rookie);
	// 	Rookie.executeForm(Edward_elric);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl;

	// // Test PresidentialPardonForm
	// std::cout << BOLD(FYEL("Test PresidentialPardonForm should work")) << std::endl;
	// try
	// {
	// 	Bureaucrat Tom("Tom", 1);
	// 	PresidentialPardonForm Jerry("Jerry");
	// 	Jerry.beSigned(Tom);
	// 	Tom.executeForm(Jerry);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl;

	// 	/********************************* Exceptions part *********************************/
	// 	std::cout << BOLD(FMAG("		/* Exceptions part */")) << std::endl;

	// std::cout << BOLD(FYEL("Test ShrubberyCreationForm shouldn't work")) << std::endl;
	// {
	// 	Bureaucrat Rox("Rox", 140);
	// 	ShrubberyCreationForm garden("garden");
	// 	garden.beSigned(Rox);
	// 	Rox.executeForm(garden);

	// }
	// std::cout << std::endl;

	// // Test RobotomyRequestForm
	// std::cout << BOLD(FYEL("Test RobotomyRequestForm shouldn't work")) << std::endl;
	// {
	// 	Bureaucrat Rookie("Rookie", 70);
	// 	Bureaucrat Rox("Rox", 70);
	// 	RobotomyRequestForm Edward_elric("Edward_elric");
	// 	Edward_elric.beSigned(Rookie);
	// 	Rox.executeForm(Edward_elric);
	// }
	// std::cout << std::endl;

	// // Test PresidentialPardonForm
	// std::cout << BOLD(FYEL("Test PresidentialPardonForm should not works")) << std::endl;
	// {
	// 	Bureaucrat Tom("Tom", 20);
	// 	PresidentialPardonForm Jerry("Jerry");
	// 	Jerry.beSigned(Tom);
	// 	Tom.executeForm(Jerry);
	// }
	// std::cout << std::endl;
	// return 0;

	Intern intern;

	Form *presidentialPardonForm = intern.makeForm("presidential pardon", "Sarko");
	std::cout << presidentialPardonForm->getName() << std::endl;

	Form *robotomyRequestForm = intern.makeForm("robotimy request", "Bender");
	std::cout << robotomyRequestForm->getName() << std::endl;

	Form *shrubberyCreationForm = intern.makeForm("shrubbery creation", "Garden");
	std::cout << shrubberyCreationForm->getName() << std::endl;

	delete presidentialPardonForm;
	delete robotomyRequestForm;
	delete shrubberyCreationForm;

	Form *errorForm = intern.makeForm("shru Form", "Error");
	if (!errorForm)
		std::cout << "errorForm -> NULL" << std::endl;
	return 0;
}
