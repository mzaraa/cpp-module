#include<iostream>
#include<sstream>
#include<string>
#include<cctype>

#include "PhoneBook.hpp"

static void cmd_add(PhoneBook &pb)
{
	std::string	first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "first name ~> ";
	std::cin >> first_name;
	std::cout << "last name ~> ";
	std::cin >> last_name;
	std::cout << "nickname ~> ";
	std::cin >> nickname;
	std::cout << "phone number ~> ";
	std::cin >> phone_number;
	std::cout << "darkest secret ~> ";
	std::cin >> darkest_secret;

	Contact new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
}

static void cmd_search(PhoneBook &pb)
{
	pb.search_contact();
}

int	main(void)
{
	PhoneBook pb;
	std::string cmd;
	while(1)
	{
		std::cout << "PhoneBook >";
		std::cin >> cmd;
		if (cmd == "ADD")
			cmd_add(pb);
		else if (cmd == "SEARCH")
			cmd_search(pb);
		else if (cmd == "EXIT")
			return 0;
	}
	return 0;
}
