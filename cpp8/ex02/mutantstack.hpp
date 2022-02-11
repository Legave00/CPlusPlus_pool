#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stack>
#include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
	private:



	public:
		
		MutantStack() {};
		~MutantStack() {};
		MutantStack(MutantStack const & src);

		MutantStack&    operator=(MutantStack const & rhs)
		{
			(void)rhs;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator    begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator    end()
		{
			return (std::stack<T>::c.end());
		}
};

#endif