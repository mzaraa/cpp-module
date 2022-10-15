#ifndef CONTACT_HPP
# define CONTACT_HPP

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include<iomanip>

class Contact
{
	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		std::string const &get_first_name(void) const;
		std::string const &get_last_name(void) const;
		std::string const &get_nickname(void) const;
		std::string const &get_phone_number(void) const;
		std::string const &get_darkest_secret(void) const;
		//~Contact(void);

	private:
		std::string _first_name, _last_name, _nickname, _phone_number, _darkest_secret;
};

#endif // CONTACT_HPP