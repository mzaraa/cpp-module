#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <limits>
#include <iomanip>
#include <stdexcept>

template <typename T>
T convert(const char* literal)
{

	double value = (std::stod(literal));

	if (std::strcmp(literal, "nan") == 0)
	{
		if (std::numeric_limits<T>::has_quiet_NaN)
			return std::numeric_limits<T>::quiet_NaN();
	}
	else if (std::strcmp(literal, "+inf") == 0 || std::strcmp(literal, "-inf") == 0)
		if (std::numeric_limits<T>::has_infinity)
			return (std::strcmp(literal, "+inf") == 0) ? std::numeric_limits<T>::infinity() : -std::numeric_limits<T>::infinity();

	if (std::numeric_limits<T>::is_integer && (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max()))
		return std::numeric_limits<int>::min();

	return static_cast<T>(value);
}

void printChar(char value)
{
	if (std::isprint(value))
		std::cout << "char: '" << value << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

	void printInt(int value)
{
	std::cout << "int: " << value << std::endl;
}

void printFloat(float value)
{
	if (value == (int)value)
		std::cout << "float: " << value << ".0f" << std::endl;
	else
		std::cout << "float: " << value << "f" << std::endl;
}

void printDouble(double value)
{
	if (value == (int)value)
		std::cout << "double: " << value << ".0" << std::endl;
	else
		std::cout << "double: " << value << std::endl;
}

int pseudo_litt(std::string val)
{
	if (val != "nan" && val != "nanf" && val != "+inf" && val != "+inff" && val != "-inf" && val != "-inff")
		return 1;
	return 0;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "error" << std::endl;
		return 0;
	}
	std::string val = av[1];
	if (val.length() == 0) 
	{
		std::cerr << "Empty string" << '\n';
		return (1);
	}
	if (val.length() == 1 && !std::isdigit(val[0]))
	{
		printChar(val[0]);
		printInt(val[0]);
		printFloat(val[0]);
		printDouble(val[0]);
		return (0);
	}

		// char convertion
	char value_char = convert<char>(av[1]);
	std::cout << "char: ";
	if (value_char == '\0')
		std::cout << "Non displayable" << std::endl;
	else if (isprint(value_char))
		std::cout << "'" << value_char << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;

		// int convertion
	int value_int = convert<int>(av[1]);
	std::cout << "int: ";
	if (value_int == std::numeric_limits<int>::min() && val != "-2147483648.0" && val != "-2147483648.0f")
		std::cout << "impossible" << std::endl;
	else
		std::cout << value_int << std::endl;
	//std::cout << std::fixed << std::setprecision(10);
		// float convertion
	float value_float = convert<float>(av[1]);
	if (pseudo_litt(val) && value_float == roundf(value_float))
		std::cout << "float: " << value_float << ".0f" << std::endl;
	else
		std::cout << "float: " << value_float << "f" << std::endl;

		// double convertion
	double value_double = convert<double>(av[1]);
	if (pseudo_litt(val) && value_double == roundf(value_double))
		std::cout << "double: " << value_double << ".0" << std::endl;
	else
		std::cout << "double: " << value_double << std::endl;

	return 0;
}
