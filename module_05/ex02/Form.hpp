#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

	/****************** Colors ******************/

# define RST  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"

# define FRED(x) KRED x RST
# define FGRN(x) KGRN x RST
# define FYEL(x) KYEL x RST
# define FBLU(x) KBLU x RST
# define FMAG(x) KMAG x RST
# define FCYN(x) KCYN x RST
# define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

class Bureaucrat;

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
		void				beSigned(Bureaucrat const & bureaucrat);
		void 				execute(Bureaucrat const & executor) const;
		virtual void 		action() const = 0;

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

			class FormNotSignedException: public std::exception
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