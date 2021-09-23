#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <map>
# include <stack>
# include <queue>
# include "MyException.hpp"

# define RESET "\033[0m"

# define F_R_BLCK "\033[0;30m"
# define F_R_RED "\033[0;31m"
# define F_R_GRN "\033[0;32m"
# define F_R_YLLW "\033[0;33m"
# define F_R_BLU "\033[0;34m"
# define F_R_PRPL "\033[0;35m"
# define F_R_CYAN "\033[0;36m"
# define F_R_WHT "\033[0;37m"

class Span
{
	private:
		unsigned int 		m_n;
		std::vector<int>	m_container;
	public:
		Span(unsigned int n);
		Span(const Span & other);
		~Span();
		Span & operator= (const Span & other);
		int operator[] (unsigned int indx) const;

		size_t			getSize(void) const;

		void 			addNumber(int num);
		void			addRange(std::vector<int>::iterator bgn, std::vector<int>::iterator end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

std::ostream & operator<<( std::ostream & out, Span const & sp);

#endif