#include<iostream>
#include<sstream>
#include<string>

int	main(int ac, char **av)
{
	std::ostringstream	os;
	std::string			str;

	(void)ac;
	while (*(++av))
		os << *av;
	str = os.str();
	for(std::string::iterator it = str.begin(); it != str.end(); ++it)
		std::toupper(*it);
	std::cout << str << std::endl;
	
	return 0;
}