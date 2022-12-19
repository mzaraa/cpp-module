#include <iostream>
#include "Array.hpp"


int main()
{
	Array<int> default_arr;
	std::cout << default_arr.size()<< std::endl;

	Array<int> arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = i+1;
	std::cout << BOLD(FMAG("Arrays before")) << std::endl;
	std::cout << FBLU("Array : arr ~> ");
	std::cout << arr << std::endl;

	Array<int> arr_cpy(arr);

	for (int i = 0; i < 5; i++)
		arr_cpy[i] += 1;
	
	std::cout << FBLU("Array : arr_cpy ~> ");
	std::cout << arr << '\n' << std::endl;

	for (int i = 0; i < 5; i++)
		arr[i] += 5;
	std::cout << BOLD(FMAG("After modification")) << std::endl;
	std::cout << FGRN("Array : arr ~> ") << arr << '\n' << FGRN("Array : arr_cpy ~> ") << arr_cpy << '\n' << std::endl;

	std::cout << BOLD(FMAG("Size of arrays : ")) << std::endl;
	std::cout << FGRN("Array : default.size() ~> ") << default_arr.size() << std::endl;
	std::cout << FGRN("Array : arr.size() ~> ") << arr.size() << std::endl;
	std::cout << FGRN("Array : arr_cpy.size() ~> ") << arr_cpy.size() << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << BOLD(FMAG("Exception throw with arr[-1]")) << std::endl;
		arr[-1];
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << BOLD(FMAG("Exception throw with arr_cpy[10]")) << std::endl;
		arr_cpy[15];
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
