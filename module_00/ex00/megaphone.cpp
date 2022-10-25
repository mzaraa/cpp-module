#include<iostream>
#include<sstream>
#include<string>
#include<cctype>

	/*
	** About ostrinstream :
	** 	There are six stream classes for strings, here i used ostringstream (derived from ostream).
	** 	Like ostream, the ostringstreams provide a buffer to hold data. Unlike cin and cout, these streams 
	** 	are not connected to an output channel (such as a keyboard or monitor). One of the primary uses of ostringstreams 
	** 	is to buffer output for display at a later time.
	
	** About iterator :
	** The iterator offers a unified way to access any collection/data structure. It makes the code more easily modifiable, modular.
	** In this case it's useless because string have random access :) but it's good to practice their use ! 
	*/
int	main(int ac, char **av)
{
	std::ostringstream	oss;
	std::string			str;

	if(ac > 1)
	{
		while (*(++av))
			oss << *av; // ~> puts all the av* in the same buffer
		str = oss.str();
		for(std::string::iterator it = str.begin(); it != str.end(); ++it)
			*it = std::toupper(*it);
		std::cout << str << std::endl;
		oss.str(""); // ~> to erase the buffer.
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
