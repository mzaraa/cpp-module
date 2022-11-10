#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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
	Contact 		_contact[max_contact];
	unsigned int	_pb_index;
	unsigned int	_array_size;
	std::string		_truncate(std::string string);
};

#endif // PHONEBOOK_HPP