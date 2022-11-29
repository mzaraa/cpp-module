#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

	/****************** Class ******************/
class Form
{
	public:
			class GradeTooHighException: public std::exception
			{
				public:
					const char *what() const throw();
			};

			class GradeTooLowException: public std::exception
			{
				public:
					const char *what() const throw();
			};

		Form(std::string const & name = "unknow_form", unsigned int gradeToExec = 1, unsigned int gradeToSign = 1) throw(Form::GradeTooLowException, Form::GradeTooHighException);
		Form(Form const & cpy);
		~Form();
		Form & operator=(Form const & rhs);

		std::string const	getName() const;
		bool 				getSigned() const;
		unsigned int 		getGradeToSign() const;
		unsigned int 		getGradeToExec() const;
		void				beSigned(Bureaucrat & bureaucrat) throw(Form::GradeTooLowException);

	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExec;

};

std::ostream & operator<<(std::ostream & os, Form const & rhs);

#endif	// FORM_HPP