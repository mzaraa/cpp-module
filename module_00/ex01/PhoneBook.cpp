#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _contact(), _pb_index(0), _array_size(0) {};

	/*
	** PhoneBook::add_contact :
	** _pb_index ~> used to know where to put the new contact.
	** Have to replace the oldest contact of the list, so when _pb_index == 8 the oldest one is the first contact of the list
	*/
void PhoneBook::add_contact(Contact &new_contact)
{
	if (_pb_index >= 8)
		_pb_index = 0;
	_contact[_pb_index] = new_contact;
	_pb_index++;
	if (_array_size == 8)
		;
	else
		_array_size++;
}

	/*
	** ligne 34 ~ 52 :
	** std::setfill('~') > sets the stream fill character std::cout to ~.
	** std::setw(56) > Manages the N number of characters (in this case ~) to generate on the output stream. Returns the previous field width.
	** 2 for loop : the first to display information we want to appear / the second informations of each contacts, or empty if it is.
	
	** ligne 60 ~ 85 :
	** Asks the user for an index to show them the information of the contact they are looking for.
	** if the index enter is bad, an error is returned, otherwise the requested contact information is displayed.
	*/
void PhoneBook::search_contact(void) 
{
	Contact		 		contact = _contact[0];
	std::string 		str_index;
	unsigned int 		index;
	std::ostringstream	oss;
	unsigned int		range;

	index = 0;
	std::cout << "\033[1;34m " << std::setfill('~') << std::setw(56) << "\033[0m\n" << std::setfill(' ');
	std::cout << "| " << std::setw(10) << "Index" << " | " << std::setw(10) << "First name" 
		<< " | " << std::setw(10) << "Last name" << " | " << std::setw(10) << "Nickname" << " |\n";

	for (unsigned int i  = 0; i < _array_size; i++)
	{
		contact = _contact[i];
		std::cout << "| " << std::setw(10) << i << " | " << std::setw(10) 
			<< _truncate(contact.get_first_name()) << " | " << std::setw(10) << _truncate(contact.get_last_name()) 
			<< " | " << std::setw(10) << _truncate(contact.get_nickname()) << " | " << std::endl;
	}

	std::cout << "\033[1;34m " << std::setfill('~') << std::setw(56) << "\033[0m\n" << std::setfill(' ');
	if (_array_size == 0)
	{
		std::cout << "empty" << std::endl;
		return ;
	}
	std::cout << "ENTREZ L'INDEX DU CONTACT !" << std::endl;
	if (_array_size > 0)
		range = _array_size-1;
	else
		range = _array_size;
	oss << "Saisissez un index entre 0 - " << range << " ~> ";
	if (prompt(oss.str(), str_index) && std::isdigit(str_index[0]) && str_index.size() == 1)
	{
		try
		{
			index = str_index[0] - 48;
			contact = print_contact(index);
			std::cout << "First name : "<< contact.get_first_name() << std::endl;
			std::cout << "Last name : " << contact.get_last_name() << std::endl;
			std::cout << "Nickname : " << contact.get_nickname() << std::endl;
			std::cout << "Phone number : " << contact.get_phone_number() << std::endl;
			std::cout << "Darkest secret : " << contact.get_darkest_secret() << std::endl;
		}
		catch(const std::out_of_range& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	else
	{
		std::cerr << "Error : Bad index" << std::endl;
	}
}

Contact const &PhoneBook::print_contact(unsigned int const &index) const
{
	if (index >= _array_size || index < 0)
	{
		std::string err = "No contact at this index.";
		throw std::out_of_range(err);
	}
	return _contact[index];

}

std::string PhoneBook::_truncate(std::string info)
{
	if (info.size() >= 10)
	{
		std::string ret = info.substr(0, 8);
		return ret +'.';
	}
	std::string ret = info;
	return ret;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\e[1;37;41m 🧱 PhoneBook destructor called \e[0m" << std::endl;
}
