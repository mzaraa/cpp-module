#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): Form("ShrubberyCreationForm", 137, 145), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy)
{
	*this = cpy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
	std::ofstream	ofs(std::string(_target + "_shrubbery").c_str());
	if (!ofs)
		std::cerr << "Error: Failed to open the file\n";
	for (int i = 0; i < 3; i++)
	{
		ofs << "       _-_" << '\n' \
		<< "   /~~    ~~ \\" << '\n' \
		<< " /~~         ~~\\" << '\n' \
		<< "{               }" << '\n' \
		<< " \\  _-     -_  /" << '\n' \
		<< "   ~  \\ //  ~" << '\n' \
		<< "_- -   | | _- _" << '\n' \
		<< "  _ -  | |   -_" << '\n' \
		<< "      // \\\\" << '\n' << std::endl;
	}
	ofs.close();
}