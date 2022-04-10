#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	std::cout << "----------------------test <vector>-----------------\n";
	{
		std::vector<int> vector;
		vector.push_back(10);
		vector.push_back(-38);
		vector.push_back(91);
		vector.push_back(10);
		std::vector<int>::iterator iter;
		std::cout << "vector : ";
		for (iter = vector.begin(); iter != vector.end(); iter++)
		{
			std::cout << *iter << " ";
		}
		std::cout << std::endl;
		try
		{
			iter = easyfind(vector, -38);
			std::cout << GREEN << "find : " << *iter << std::endl << EOC;
			iter = easyfind(vector, 5);
			std::cout << GREEN << "find : " << *iter << std::endl << EOC;
		}
		catch (const std::exception &e)
		{
			std::cout << RED << e.what() << EOC << std::endl;
		}
	}
	std::cout << "----------------------test <list>-----------------\n";
	{
		std::list<int> list;
		list.push_back(10);
		list.push_back(53);
		list.push_back(6);
		list.push_back(13);
		list.push_back(17);
		std::list<int>::iterator iter;
		std::cout << "list : ";
		for (iter = list.begin(); iter != list.end(); iter++)
		{
			std::cout << *iter << " ";
		}
		std::cout << std::endl;
		try
		{
			iter = easyfind(list, 6);
			std::cout << GREEN << "find : " << *iter << std::endl << EOC;
			iter = easyfind(list, 0);
			std::cout << GREEN << "find : " << *iter << std::endl << EOC;
		}
		catch (const std::exception &e)
		{
			std::cout << RED << e.what() << EOC << std::endl;
		}
	}
	return 0;
}