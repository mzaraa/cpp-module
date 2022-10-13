#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _contact(), _pb_index(0) {};

void PhoneBook::add_contact(Contact &new_contact)
{
	if (_pb_index > 8)
		_pb_index = 0;
	_contact[_pb_index] = new_contact;
	_pb_index++;
}

void PhoneBook::search_contact(void) const
{
	unsigned int i = 0;
	while (i <= _pb_index)
		std::cout << _contact[i].get_first_name() << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\e[1;37;41m 🧱 PhoneBook destructor called \e[0m" << std::endl;
}
