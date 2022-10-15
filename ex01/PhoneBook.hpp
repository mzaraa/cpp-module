#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include<iomanip>

# include "Contact.hpp"

std::istream &prompt(std::string const &prompt_line, std::string &line_read);

class PhoneBook
{
public:
	PhoneBook();
	void add_contact(Contact &contact);
	Contact const &print_contact(unsigned int const &index) const;
	void search_contact(void);
	~PhoneBook();

private:
	static unsigned int const	max_contact = 8;
	unsigned int	_pb_index;
	unsigned int	_array_size;
	Contact 		_contact[max_contact];
	std::string		_truncate(std::string string);
};

#endif // PHONEBOOK_HPP