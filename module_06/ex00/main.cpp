#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <limits>
#include <stdexcept>

template <typename T>
T convert(const char* literal)
{

	double value = static_cast<T>(atof(literal));

	if (std::strcmp(literal, "nan") == 0)
	{
		if (std::numeric_limits<T>::has_quiet_NaN)
			return std::numeric_limits<T>::quiet_NaN();
	}
	else if (std::strcmp(literal, "+inf") == 0 || std::strcmp(literal, "-inf") == 0)
		if (std::numeric_limits<T>::has_infinity)
			return (std::strcmp(literal, "+inf") == 0) ? std::numeric_limits<T>::infinity() : -std::numeric_limits<T>::infinity();

		// if the target type is int, check if the value is out of range
	if (std::numeric_limits<T>::is_integer && (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max()))
		return std::numeric_limits<int>::min(); // return a sentinel value

	return static_cast<T>(value);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "error" << std::endl;
		return 0;
	}

	char value_char = convert<char>(av[1]);
	std::cout << "char: ";
	if (value_char == '\0')
		std::cout << "Non displayable" << std::endl;
	else if (isprint(value_char))
		std::cout << "'" << value_char << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;

	int value_int = convert<int>(av[1]);
	std::cout << "int: ";
	if (value_int == std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << value_int << std::endl;

	float value_float = convert<float>(av[1]);
	if (value_float == roundf(value_float))
		std::cout << "double: " << value_float << ".0f" << std::endl;
	else
		std::cout << "double: " << value_float << "f" << std::endl;

	double value_double = convert<double>(av[1]);
	if (value_double == roundf(value_double))
		std::cout << "double: " << value_double << ".0" << std::endl;
	else
		std::cout << "double: " << value_double << std::endl;

	return 0;
}
