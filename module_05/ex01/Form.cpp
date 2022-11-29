#include "Form.hpp"

Form::Form(std::string const & name, unsigned int gradeToExec, unsigned int gradeToSign) throw(Form::GradeTooLowException, Form::GradeTooHighException)
	: _name(name), _gradeToExec(gradeToExec), _gradeToSign(gradeToSign), _signed(false)
{
	std::cout << "[" << BOLD(FGRN("DCTR Form")) << "] "<< "Default constructor called" << std::endl;
	if ((int)_gradeToExec < 1 || (int)_gradeToSign < 1) 
		throw Form::GradeTooHighException();
	if ((int)_gradeToExec > 150 || (int)_gradeToSign > 150) 
		throw Form::GradeTooLowException();
}

Form::Form(Form const & rhs): _name(rhs._name), _gradeToExec(rhs._gradeToExec), _gradeToSign(rhs._gradeToSign)
{
	std::cout << "[" << BOLD(FGRN("Copy CTR")) << "] "<< "Copy constructor called" << std::endl;
	*this = rhs;
}

Form::~Form(void)
{
	std::cout << "[" << BOLD(FRED("DSTR Form")) << "] "<< "Destructor called ~ Form " << getName() << std::endl;
}

Form & Form::operator=(Form const & rhs)
{
	if (this == &rhs)
		return *this;
	_signed = rhs._signed;
	return *this;
}

bool Form::getSigned() const
{
	return _signed;	
}

std::string const Form::getName() const
{
	return _name;
}

unsigned int Form::getGradeToExec() const
{
	return _gradeToExec;
}

unsigned int Form::getGradeToSign() const
{
	return _gradeToSign;
}

void Form::beSigned(Bureaucrat & bureaucrat) throw(Form::GradeTooLowException)
{
	if (bureaucrat.getGrade() > getGradeToSign())
	{
		bureaucrat.signForm(_name, 0);
		throw Form::GradeTooLowException();
	}
	else
	{
		bureaucrat.signForm(_name, 1);
		_signed = true;
	}
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Form : The grade is too high";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Form : The grade is too low";
}

std::ostream & operator<<(std::ostream & os, Form const & rhs)
{
	os << "Name = " << rhs.getName() << ". Signature Status = " << rhs.getSigned() 
	<< ". Signing grade = " << rhs.getGradeToSign() << ". Executing grade = " << rhs.getGradeToExec();
	return os;
}