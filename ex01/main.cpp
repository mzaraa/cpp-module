#include "PhoneBook.hpp"


static void cmd_add(PhoneBook &pb)
{
	std::string	first_name, last_name, nickname, phone_number, darkest_secret;

	prompt("first name ~> ", first_name);
	prompt("last name ~> ", last_name);
	prompt("nickname ~> ", nickname);
	prompt("phone_number ~> ", phone_number);
	prompt("darkest secret ~> ", darkest_secret);

	Contact new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	pb.add_contact(new_contact);
}

static void cmd_search(PhoneBook &pb)
{
	pb.search_contact();
}

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
