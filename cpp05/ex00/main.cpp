#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "---------- construcotr exception check ------------\n";
	try
	{
		Bureaucrat b1("b1", 1); //생성자 정상 호출
		std::cout << b1; //name, grade 정상 호출
		Bureaucrat b2(b1);
		// Bureaucrat b2("b2", -1); //생성사 호출 시 에러 throw
		std::cout << b2; //name, grade 정상 호출
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "------- increase & decrease exception check --------\n";
	try
	{
		Bureaucrat b1("b1", 10);
		// b1.increaseGrade(5);
		//b1.decreaseGrade(5);
		// b1.increaseGrade(10);
		b1.decreaseGrade(150);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	//system("leaks Bureaucrat");
	return 0;
}