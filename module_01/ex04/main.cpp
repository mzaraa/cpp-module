#include <fstream>
#include <iostream>

static char* creat_output_file(char *av)
{
	
}

int main(int ac, char** av)
{
	if (ac != 4)
	{
		std::cerr << "Usage : filename  s1  s2\n";
		return 1;
	}
	else if (!*av[1] || !*av[2] || !*av[3])
	{
		std::cerr << "Error : Empty string\n";
		return 1;
	}

	std::ifstream input_stream(av[1]);
	if (input_stream.fail())
	{
		std::cerr << "Open file failed\n";
		return 1;
	}
	return 0;
}