#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>
# include<sstream>
# include<string>
# include<cctype>
# include <stdexcept>

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

	/****************** Class ******************/
class Bureaucrat
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

		Bureaucrat(const std::string & name = "unknow", unsigned int grade = 150) throw(Bureaucrat::GradeTooLowException, Bureaucrat::GradeTooHighException);
		Bureaucrat(Bureaucrat const & cpy);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string const	getName() const;
		unsigned int		getGrade() const;
		void 				decrementation() throw(Bureaucrat::GradeTooLowException);
		void 				incrementation() throw(Bureaucrat::GradeTooHighException);

	private:
		std::string const	_name;
		unsigned int		_grade;

};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & rhs);

#endif	// BUREAUCRAT_HPP