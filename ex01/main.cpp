#include "Span.hpp"

int		main()
{
	try
	{
		int		n2find = 0;

		//VECTOR////////////////////
		std::vector<int> int_vctr;
		for (int n = 0; n < 10; ++n)
			int_vctr.push_back(n);
		std::vector<int>::const_iterator itr_v = easyFind(int_vctr, n2find);
		std::cout << F_R_GRN << "Number " << F_R_PRPL << *itr_v << F_R_GRN << " is in the vector." << RESET << std::endl;

		//LIST////////////////////
		std::list<int> int_lst;
		for (int n = 0; n < 10; ++n)
			int_lst.push_back(n);
		std::list<int>::const_iterator itr_l = easyFind(int_lst, n2find);
		std::cout << F_R_GRN << "Number " << F_R_PRPL << *itr_l << F_R_GRN << " is in the list." << RESET << std::endl;
	
	}
	catch(const std::exception& e)
	{
		std::cerr << F_R_RED << e.what() << RESET << std::endl;
	}
	
	return (0);
}