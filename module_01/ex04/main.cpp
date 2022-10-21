#include <fstream>
#include <iostream>
#include <cstring>
#include <string>

void replace(std::string &content, std::ofstream &o_file, char* string1, char* string2)
{
	size_t pos = 0;
	while ((pos = content.find(string1, pos)) != std::string::npos)
	{
		content.erase(pos, std::string(string1).length());
		content.insert(pos, std::string(string2));
		pos += std::string(string2).length();
	}
	for (size_t i = 0; i < content.size(); i++)
		o_file << content[i];
}

int main(int ac, char** av)
{
	/* ac - av -> Error checker */
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
	/*
	** -> creating an iinput file stream "input_stream" and using his constructor
	** to open the file -> check if the open failed 
	*/
	std::ifstream	input_stream(av[1]);
	if (input_stream.fail())
	{
		std::cerr << "Open file failed\n";
		return 1;
	}
	/*
	** name -> string used to stock name of the file opened and joined ".replace" to create the new one
	** o_file -> a output file stream using to create the output file
	*/
	std::string name = av[1] + std::string(".replace");
	std::ofstream	o_file(name);

	/*
	** content -> an std::string object created to stock all the char in the file
	** it take 2 params (InputIterator first, InputIterator last) 
	** -> Copies the sequence of characters in the range [first,last), in the same order.
	** function replace -> take 4 params : 
	** 				content : all the content read
	** 				o_file : the output file to write to.
	** 				av[2] : string to replace
	** 				av[3] : string which replace string av[2]
	*/
	std::string content((std::istreambuf_iterator<char>(input_stream)),
									(std::istreambuf_iterator<char>()));
	replace(content, o_file, av[2], av[3]);
	return 0;
}
