#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{}

Span::Span(Span const & cpy) : _N(cpy._N), _vec(cpy._vec)
{}

Span& Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return *this;
	_vec = rhs._vec;
	_N = rhs._N;
	return *this;
}

Span::~Span()
{}

void Span::addNumber(int num)
{
	if (_vec.size() == _N)
		throw std::runtime_error("Can't add number to span");
	_vec.push_back(num);
}

// Find the shortest span between all the numbers stored
int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw std::runtime_error("Can't find span with less than 2 numbers");

	std::sort(_vec.begin(), _vec.end());
	int shortest = _vec[1] - _vec[0];
	for (unsigned int i = 1; i < _vec.size() - 1; i++)
		shortest = std::min(shortest, _vec[i + 1] - _vec[i]);
	return shortest;
}

// Find the longest span between all the numbers stored
// https://www.geeksforgeeks.org/how-to-find-the-minimum-and-maximum-element-of-a-vector-using-stl-in-c/
int Span::longestSpan() const
{
	if (_vec.size() <= 1)
		throw std::runtime_error("Can't find span with less than 2 numbers");
	// the difference between the maximum and minimum elements in the vector using the std::max_element and std::min_element functions from the <algorithm> to get le longest span.
	return (*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end()));
}
