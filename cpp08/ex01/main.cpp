#include "Span.hpp"

int main()
{
	std::cout << "simple test\n";
	{
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.printVec();
			std::cout << "shortSpan : " <<  sp.shortestSpan() << std::endl;
			std::cout << "longSpan: " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << RED << e.what() << EOC << '\n';
		}
	}
	// std::cout << "1 ~ 10000 test\n";
	// {
	// 	Span sp(10000);
	// 	std::vector<int> vector1;
	// 	for (int i = 0; i < 9900; i++)
	// 	{
	// 		if (i < 100)
	// 			vector1.push_back(i + 1);
	// 		sp.addNumber(i + 1);
	// 	}
	// 	try
	// 	{
	// 		sp.addNumber(vector1.begin(), vector1.end());
	// 		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	// 		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	// 		std::cout << "sp size: " << sp.getSize();
	// 		sp.addNumber(vector1.begin(), vector1.end());
	// 		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	// 		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	// 		std::cout << "sp size: " << sp.getSize();
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << RED << e.what() << EOC << '\n';
	// 	}
	// }
	return 0;
}