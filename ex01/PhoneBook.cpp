#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _contact(), _pb_index(0), _array_size(0) {};

void PhoneBook::add_contact(Contact &new_contact)
{
	if (_pb_index >= 8)
		_pb_index = 0;
	_contact[_pb_index] = new_contact;
	_pb_index++;
	_array_size++;
}

void PhoneBook::search_contact(void) const
{
	Contact		 		contact = _contact[0];
	std::string 		str_index;
	unsigned int 		index;
	std::ostringstream	oss;

	index = 0;
	std::cout << "\033[1;34m " << std::setfill('~') << std::setw(56) << "\033[0m\n" << std::setfill(' ');
	std::cout << "| " << std::setw(10) << "Index" << " | " << std::setw(10) << "First name" 
		<< " | " << std::setw(10) << "Last name" << " | " << std::setw(10) << "Nickname" << " |\n";

	for (unsigned int i  = 0; i < _array_size; i++)
	{
		contact = _contact[i];
		std::cout << "| " << std::setw(10) << i << " | " << std::setw(10) 
			<< contact.get_first_name() << " | " << std::setw(10) << contact.get_last_name() 
			<< " | " << std::setw(10) << contact.get_nickname() << " | " << std::endl;
	}

	std::cout << "\033[1;34m " << std::setfill('~') << std::setw(56) << "\033[0m\n" << std::setfill(' ');

	std::cout << "ENTREZ L'INDEX DU CONTACT !" << std::endl;
	oss << "Saisissez un index entre 0 - " << _array_size << " ~> ";
	if (prompt(oss.str(), str_index) && std::isdigit(str_index[0]) && str_index.size() == 1)
	{
		try
		{
			index = str_index[0] + 48;
			contact = print_contact(index);
			//TO DO : print contact's informations. ;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	else
	{
		std::cerr << "A quoi tu joues frerot ?" << std::endl;
		std::exit(1);
	}
}
Contact const &PhoneBook::print_contact(unsigned int const &index) const
{
	if (index > _array_size || index < 0)
	{
		throw std::out_of_range("No contact at this index.");
	}
	return _contact[index];

}

PhoneBook::~PhoneBook()
{
	std::cout << "\e[1;37;41m 🧱 PhoneBook destructor called \e[0m" << std::endl;
}
