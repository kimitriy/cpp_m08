#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> mstack;
	
	mstack.push(1);
	mstack.push(2);

	std::cout << F_R_GRN << "top: " << mstack.top() << RESET << std::endl;
	// mstack.pop();
	std::cout << F_R_GRN << "top: " << mstack.top() << RESET << std::endl;
	std::cout << F_R_GRN << "size: " << mstack.size() << RESET << std::endl;

	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	
	{
		MutantStack<int>::itr it = mstack.begin();
		MutantStack<int>::itr ite = mstack.end();
		++it;
		--it;
		std::cout << F_R_CYAN << "MUTANT start" << RESET << std::endl;
		while (it != ite)
		{
			std::cout << F_R_PRPL << *it << RESET << std::endl;
			++it;
		}
		std::cout << F_R_CYAN << "MUTANT end" << RESET << std::endl;
		std::cout << std::endl;
	}

	mstack.push(7);
	mstack.push(8);
	mstack.push(9);

	std::cout << F_R_GRN << "mstack.empty(): " << mstack.empty() << RESET << std::endl; //returns "true" if stack is empty 
	
	{
		MutantStack<int>::const_itr it = mstack.begin();
		MutantStack<int>::const_itr ite = mstack.end();
		++it;
		--it;
		std::cout << F_R_CYAN << "MUTANT start" << RESET << std::endl;
		while (ite + 1 != it)
		{
			std::cout << F_R_PRPL << *ite << RESET << std::endl;
			--ite;
		}
		std::cout << F_R_CYAN << "MUTANT end" << RESET << std::endl;
		std::cout << std::endl;
	}
	
	std::stack<int> s(mstack);
	std::cout << F_R_GRN << "top: " << s.top() << RESET << std::endl;
	std::cout << F_R_GRN << "size: " << s.size() << RESET << std::endl;

	return 0;
}
