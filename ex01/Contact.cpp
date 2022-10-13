#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "\e[1;37;44m 🧱 Contact default constructor called \e[0m" << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, 
		std::string nickname, std::string phone_number, 
		std::string darkest_secret): _first_name(first_name), 
		_last_name(last_name), _nickname(nickname), _phone_number(phone_number), 
		_darkest_secret(darkest_secret) {};

std::string const &Contact::get_first_name(void) const {return _first_name;}

std::string const &Contact::get_last_name(void) const {return _last_name;}

std::string const &Contact::get_nickname(void) const {return _nickname;}

std::string const &Contact::get_phone_number(void) const {return _phone_number;}

std::string const &Contact::get_darkest_secret(void) const{return _darkest_secret;}

Contact::~Contact(void)
{
	std::cout << "\e[1;37;41m 🧱 Contact destructor called \e[0m" << std::endl;
}
