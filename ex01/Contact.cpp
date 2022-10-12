#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "\e[1;37;44m 🧱 Contact default constructor called \e[0m" << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, 
		std::string nickname, std::string phone_number, 
		std::string darkest_secret): first_name(first_name), 
		last_name(last_name), nickname(nickname), phone_number(phone_number), 
		darkest_secret(darkest_secret){};

Contact::~Contact(void)
{
	std::cout << "\e[1;37;41m 🧱 Contact destructor called \e[0m" << std::endl;
}
