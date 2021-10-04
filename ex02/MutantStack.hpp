#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <map>
# include <stack>
# include <queue>
// # include "MyException.hpp"

# define RESET "\033[0m"

# define F_R_BLCK "\033[0;30m"
# define F_R_RED "\033[0;31m"
# define F_R_GRN "\033[0;32m"
# define F_R_YLLW "\033[0;33m"
# define F_R_BLU "\033[0;34m"
# define F_R_PRPL "\033[0;35m"
# define F_R_CYAN "\033[0;36m"
# define F_R_WHT "\033[0;37m"

/*
template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		MutantStack(unsigned int n);
		MutantStack(const MutantStack & other);
		virtual ~MutantStack();
		MutantStack & operator= (const MutantStack & other);
		int operator[] (unsigned int indx) const;

		size_t			getSize(void) const;

		void 			addNumber(int num);
		void			addRange(std::vector<int>::iterator bgn, std::vector<int>::iterator end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

std::ostream & operator<<( std::ostream & out, MutantStack const & sp);
*/

template <typename T>
class MutantStack: public std::stack <T>
{
	private:

	public:
		typedef typename std::stack<T>::container_type::iterator itr;
		typedef typename std::stack<T>::container_type::const_iterator const_itr;
		
		MutantStack(){ std::cout << "constr" << std::endl; };
		MutantStack(MutantStack const &src): std::stack<T>(src){ std::cout << "copy constr" << std::endl; };
		virtual ~MutantStack(void){ std::cout << "destr" << std::endl; };
		MutantStack &operator=(MutantStack const &src)
		{
			std::cout << "= operator" << std::endl;
			if (this != &src)
			{
				std::stack<T>::operator=(src);
			}
		};
		
		itr begin()
		{
			return(std::stack<T>::c.begin());
		};
		
		itr end()
		{
			return(std::stack<T>::c.end());
		};
		
		const_itr begin() const
		{
			return(std::stack<T>::c.begin());
		};
		
		const_itr end() const
		{
			return(std::stack<T>::c.end());
		};
};

#endif