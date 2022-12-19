#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		// c++11
		// using iterator = typename std::stack<T>::container_type::iterator;
		// using const_iterator = typename std::stack<T>::container_type::const_iterator;

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		MutantStack(): std::stack<T>()
		{}

		MutantStack(MutantStack const & rhs) { *this = rhs; }

		~MutantStack() {}

		MutantStack & operator=(MutantStack const & rhs)
		{
			std::stack<T>::operator=(rhs);
		}

		iterator begin(void) { return this->c.begin(); }
		iterator end(void) { return this->c.end(); }

		const_iterator start(void) const{ return this->c.begin(); }
		const_iterator end(void) const { return this->c.end(); }
};

#endif