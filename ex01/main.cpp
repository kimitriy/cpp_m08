#include "Span.hpp"

int		main()
{
	try
	{
		Span sp = Span(20);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(15);

		std::vector<int> int_vctr;
		std::vector<int>::iterator frst = int_vctr.begin();
		std::vector<int>::iterator last = int_vctr.begin() + 10;
		sp.addRange(frst, last);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << F_R_RED << e.what() << RESET << std::endl;
	}
	
	return (0);
}