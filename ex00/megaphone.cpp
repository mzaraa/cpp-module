#include<iostream>
#include<sstream>
#include<string>


int	main(int ac, char **av)
{
	std::ostringstream	os;
	std::string			str;

	if(ac > 1)
	{
		while (*(++av))
			os << *av;
		str = os.str();
		for(std::string::iterator it = str.begin(); it != str.end(); ++it)
			*it = std::toupper(*it);
		std::cout << str << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}