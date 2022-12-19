#ifndef SPAN_HPP
# define SPAN_HPP

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

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
	public:
		Span(unsigned int N);
		Span(Span const & cpy);
		Span & operator=(Span const & rhs);
		~Span();

		void addNumber(int num);

		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			if (_vec.size() == _N)
				throw std::runtime_error("Can't add number to span");
			for (std::vector<int>::iterator it = begin; it != end; ++it)
				addNumber(*it);
		}
		int shortestSpan();
		int longestSpan() const;

	private:
		unsigned int _N;
		std::vector<int> _vec;
};

#endif