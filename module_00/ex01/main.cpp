#include "PhoneBook.hpp"

	/*
	** cmd_add ~> when the user write ADD : 
	** I get the new contact information. 
	** Then, I check that there is no box left empty.
	** When all is good, a new instance of the Contact class is created and added to the PhoneBook list.
	*/
static void cmd_add(PhoneBook &pb)
{
	std::string	first_name, last_name, nickname, phone_number, darkest_secret;

	prompt("first name ~> ", first_name);
	prompt("last name ~> ", last_name);
	prompt("nickname ~> ", nickname);
	prompt("phone_number ~> ", phone_number);
	prompt("darkest secret ~> ", darkest_secret);

	if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cerr << "No field should be empty !" << std::endl;
		return ;
	}
	for (unsigned int i = 0; i < 10; i++)
	{
		if (!std::isdigit(phone_number[i]) || phone_number.size() != 10)
		{
			std::cerr << "The phone number should contain 10 number." << std::endl;
			return ;
		}
	}
	Contact new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	pb.add_contact(new_contact);
}

static void cmd_search(PhoneBook &pb)
{
	pb.search_contact();
}

	/*
	** std::istream &prompt() :
	** function where i use getline() to reads characters from std::cin and places them into a string
	** return std::cin ~> useful to know if there was an error in reading.
	** A null pointer if at least one of failbit or badbit is set. Some other value otherwise (for C++98 standard).
	*/
std::istream &prompt(std::string const &prompt_line, std::string &line_read)
{
	std::cout << prompt_line;
	std::getline(std::cin, line_read);
	return std::cin;
}

int	main(void)
{
	PhoneBook pb;
	std::string cmd;
	while(prompt("PhoneBook > ", cmd))
	{
		if (cmd == "ADD")
			cmd_add(pb);
		else if (cmd == "SEARCH")
			cmd_search(pb);
		else if (cmd == "EXIT")
			return 0;
	}
	std::cout << "Bisous" << std::endl;
	return 0;
}
