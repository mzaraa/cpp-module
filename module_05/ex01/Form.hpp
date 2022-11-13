#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

	/****************** Class ******************/
class Form
{
	public:
		Form(std::string const & name = "unknow", unsigned int gradeToExec = 1, unsigned int gradeToSign = 1);
		Form(Form const & cpy);
		~Form();
		Form & operator=(Form const & rhs);

		std::string const	getName() const;
		bool 				getSigned() const;
		unsigned int 		getGradeToExec() const;
		unsigned int 		getGradeToSign() const;
		void				beSigned(Bureaucrat & bureaucrat);

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

	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExec;

};

std::ostream & operator<<(std::ostream & os, Form const & rhs);

#endif	// FORM_HPP