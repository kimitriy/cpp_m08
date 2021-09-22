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
		std::vector<int>	container;
	public:
		Span(unsigned int n);
		~Span();

		void 			addNumber(int num);
		void			addRange(int num1, int num2);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

template <typename T>
typename T::const_iterator	easyFind(T & cont, int n)
{
	typename T::const_iterator itr = std::find(cont.begin(), cont.end(), n);
	if (cont.end() == itr)
		throw (MyException("There is no such element in the container"));
	else
		return (itr);
}

#endif