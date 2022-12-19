#ifndef ARRAY_HPP
# define ARRAY_HPP

	/****************** Colors ******************/

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

#include <cstdio>
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	public:
		// Difference between _data(new T[_size]) & _data(new T(_size)) ?
		// ~> the first creates an array of size _size of variables of type T.
		// This means you can access each element of the array using the [] operator, for example _data[i] to access the i-th element of the array.
		// ~> the second creates a single variable of type T initialized with the value _size.
		// This means you cannot access a specific element of the array with the [] operator, because there is no array.

		// Construct an empty array
		Array() : _size(0), _data(new T[0]) { }

		// Construct an array with n elements initialized by default
		Array(unsigned int n) : _size(n), _data(new T[_size]) { }

		// Copy constructor
		Array(const Array& cpy) : _size(cpy._size), _data(new T[_size])
		{
			for (size_t i = 0; i < _size; i++)
				_data[i] = cpy._data[i];
		}

		// Assignment operator
		Array & operator=(const Array& rhs)
		{
			if (this == &rhs) 
				return *this;

			delete[] _data;
			// Allocate new memory and copy the data
			_size = rhs._size;
			_data = new T[_size];

			for (size_t i = 0; i < _size; i++)
				_data[i] = rhs._data[i];
			return *this;
		}

		// Destructor
		~Array() { delete[] _data; }

		T & operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("Index out of bounds");
			return _data[index];
		}

		const T & operator[](unsigned int index) const
		{
			if (index >= _size)
				throw std::out_of_range("Index out of bounds");
			return _data[index];
		}

		size_t size() const { return _size; }

	private:
		size_t _size; // Number of elements in the array
		T* _data; // Pointer to the data
};

template<typename T>
std::ostream & operator<<(std::ostream & os, const Array<T> arr)
{
	if ((arr.size() == 0))
		std::cout << "array empty" << std::endl;
	else
	{
		os << '[';
		for (size_t i = 0; i < arr.size(); i++)
		{
			os << arr[i];
			if (i < (arr.size()-1))
				os << ", ";
		}
		os << ']';
	}
	return os;
}

#endif