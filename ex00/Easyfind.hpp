#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
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

template <typename T>
void	easyfind(std::vector<T> cont, int n)
{
	std::vector<T>::const_iterator itr;
	itr = cont.begin();
	while (itr != cont.end())
	{
		if (*it )
		++itr;
	}
}

#endif