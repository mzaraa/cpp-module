#include "easyfind.hpp"

int main()
{
	{
		// test with vector
		std::cout << BOLD(FMAG("Test with vector")) << std::endl;
		std::cout << FBLU("vector ~ [1, 2, 3, 4, 5] | val to find = 4") << std::endl;
		std::vector<int> vec;
		for (int i = 0; i < 5; i++)
			vec.push_back(i+1);
		std::vector<int>::iterator it = easyfind(vec, 4);

		if (it != vec.end())
			std::cout << "easyfind function found the value we were looking for at index : " << std::distance(vec.begin(), it) << std::endl;
		else
			std::cout << "value not find in the container" << std::endl;

		std::cout << FBLU("vector ~ [1, 2, 3, 4, 5] | val to find = 15") << std::endl;
		it = easyfind(vec, 15);
		if (it != vec.end())
			std::cout << "easyfind function found the value we were looking for at index : " << std::distance(vec.begin(), it) << std::endl;
		else
			std::cout << "value not find in the container" << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << BOLD(FMAG("Test with list")) << std::endl;
		std::cout << FBLU("list ~ [1, 2, 3, 4, 5] | val to find = 5") << std::endl;
		// test with list
		std::list<int> l_arr;

		for (int i = 0; i < 5; i++)
			l_arr.push_back(i+1);

		std::list<int>::iterator l_it = easyfind(l_arr, 5);

		if (l_it != l_arr.end())
			std::cout << "easyfind function found the value we were looking for at index : " << std::distance(l_arr.begin(), l_it) << std::endl;
		else
			std::cout << "value not find in the container" << std::endl;

		std::cout << FBLU("list ~ [1, 2, 3, 4, 5] | val to find = 20") << std::endl;
		l_it = easyfind(l_arr, 20);
		if (l_it != l_arr.end())
			std::cout << "easyfind function found the value we were looking for at index : " << std::distance(l_arr.begin(), l_it) << std::endl;
		else
			std::cout << "value not find in the container" << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << BOLD(FMAG("Test with set")) << std::endl;
		std::cout << FBLU("set ~ [1, 2, 3, 4, 5] | val to find = 2") << std::endl;
		// test with set
		std::set<int> s_arr;
		for (int i = 0; i < 5; i++)
			s_arr.insert(i+1);
		std::set<int>::iterator s_it = easyfind(s_arr, 2);

		if (s_it != s_arr.end())
			std::cout << "easyfind function found the value we were looking for at index : " << std::distance(s_arr.begin(), s_it) << std::endl;
		else
			std::cout << "value not find in the container" << std::endl;

		std::cout << FBLU("set ~ [1, 2, 3, 4, 5] | val to find = 10") << std::endl;
		s_it = easyfind(s_arr, 10);

		if (s_it != s_arr.end())
			std::cout << "easyfind function found the value we were looking for at index : " << std::distance(s_arr.begin(), s_it) << std::endl;
		else
			std::cout << "value not find in the container" << std::endl;
	}
	return 0;
}
