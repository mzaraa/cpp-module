#ifndef CONTACT_HPP
# define CONTACT_HPP

# include<iostream>
# include<sstream>
# include<string>
# include<cctype>

class Contact
{
	public:
		std::string first_name, last_name, nickname, phone_number, darkest_secret;
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		~Contact(void);

	private:
};

#endif // CONTACT_HPP