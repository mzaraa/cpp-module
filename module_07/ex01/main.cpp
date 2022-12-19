#include "iter.hpp"

int main( void ) {
	
	std::cout << BOLD(FMAG("Iter function with integer")) << std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	iter<int, void(*)(int&)>(arr, 5, static_cast<void (*)(int&)>(print<int &>));
	std::cout << '\n';
	iter<int, void(*)(int&)>(arr, 5, static_cast<void (*)(int&)>(increment<int &>));
	iter<int, void(*)(int&)>(arr, 5, static_cast<void (*)(int&)>(print<int &>));
	std::cout << '\n';

	std::cout << std::endl;
	
	std::cout << BOLD(FMAG("Iter function with float")) << std::endl;
	float arr_float[] = {1.5, 2.5, 3.5, 4.5, 5.5};
	iter<float, void(*)(float&)>(arr_float, 5, static_cast<void (*)(float&)>(print<float &>));
	std::cout << '\n';
	iter<float, void(*)(float&)>(arr_float, 5, static_cast<void (*)(float&)>(increment<float &>));
	iter<float, void(*)(float&)>(arr_float, 5, static_cast<void (*)(float&)>(print<float &>));
	std::cout << '\n';
	return 0;
}
