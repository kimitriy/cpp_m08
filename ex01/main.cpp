#include "Span.hpp"

int		main()
{
	try
	{
		Span sp = Span(10001);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(15);

		// Span sp = Span(10001);
		std::vector<int> int_vctr;
		for(int i = 0; i < 9995; i++)
		{
			int_vctr.push_back(i * 7);
		}
		sp.addRange(int_vctr.begin(), int_vctr.end());
		
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << F_R_RED << e.what() << RESET << std::endl;
	}
	
	return (0);
}