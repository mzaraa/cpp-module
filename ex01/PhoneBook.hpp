#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	void add_contact(Contact &contact);
	void search_contact(void) const;
	~PhoneBook();

private:
	static unsigned int const	max_contact = 8;
	unsigned int	_pb_index;
	Contact 		_contact[max_contact];
};

#endif // PHONEBOOK_HPP