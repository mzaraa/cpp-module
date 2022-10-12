#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	void add_contact(Contact &contact);
	~PhoneBook();

private:
	static unsigned int const max_contact = 8;
	Contact _contact[max_contact];
};

#endif // PHONEBOOK_HPP