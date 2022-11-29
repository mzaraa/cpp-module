#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, unsigned grade) throw(Bureaucrat::GradeTooLowException, Bureaucrat::GradeTooHighException)
	: _name(name), _grade(grade)
{
	std::cout << "[" << BOLD(FGRN("DCTR Bureaucrat")) << "] "<< "Default constructor called" << std::endl;
	if ((int)grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	if ((int)grade > 150) 
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs): _name(rhs._name)
{
	std::cout << "[" << BOLD(FGRN("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "[" << BOLD(FRED("DSTR Bureaucrat")) << "] "<< "Destructor called ~ Bureaucrat " << getName() << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this == &rhs)
		return *this;
	_grade = rhs._grade;
	return *this;
}

std::string const Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::decrementation() throw(Bureaucrat::GradeTooLowException)
{
    if ((int)_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += 1;
}

void Bureaucrat::incrementation() throw(Bureaucrat::GradeTooHighException)
{
      if ((int)_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= 1;
}

void Bureaucrat::signForm(std::string const & form_name, int val) // added for ex01
{
	if (val == 1)
		std::cout << _name << " signed " << form_name << std::endl;
	else
		std::cout << _name << " couldn't sign " << form_name << " because his grade is too low" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Bureaucrat : The grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Bureaucrat : The grade is too low";
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return os;
}