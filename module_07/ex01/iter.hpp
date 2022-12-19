#ifndef ITER_HPP
# define ITER_HPP

# define RST  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"

# define FRED(x) KRED x RST
# define FGRN(x) KGRN x RST
# define FYEL(x) KYEL x RST
# define FBLU(x) KBLU x RST
# define FMAG(x) KMAG x RST
# define FCYN(x) KCYN x RST
# define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

#include <iostream>

template <typename T, typename F>
void iter(T* arr, size_t size, F func)
{
	if (!arr || size <= 0)
		return ;
	for (size_t i = 0; i < size; i++)
		func(arr[i]);
}

template<typename T>
void increment(T & element)
{
	element++;
}

template<typename T>
void print(T & element)
{
	std::cout << element << ' ';
}

#endif