#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "---------- Bureaucrat construcotr exception check ------------\n";
	try
	{
		Bureaucrat b1("b1", 1); //생성자 정상 호출
		std::cout << b1; //name, grade 정상 호출
		Bureaucrat b2("b2", -1); //생성사 호출 시 에러 throw
		std::cout << b2; //name, grade 정상 호출
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "--------- increase & decrease exception check ----------\n";
	try
	{
		Bureaucrat b1("b1", 10);
	//	b1.increaseGrade(5);
	//	b1.decreaseGrade(5);
	//	b1.increaseGrade(10);
		b1.decreaseGrade(150);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	std::cout << std::endl;

	std::cout << "---------- Form construcotr exception check ----------\n";
	try
	{
		Form f1("f1", 151, 75);
		//Form f2("f2", -1, 10);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "------------- Sign exception check ------------\n";
	Bureaucrat b1("b1", 90);
	Form f1("f1", 130, 80); //Sign 가능
	std::cout << f1 << std::endl;
	Form f2("f2", 10, 5); //Sign 불가능
	std::cout << f2 << std::endl;
	try
	{
		b1.signForm(f1); //정상실행
		b1.signForm(f1); //exception->alreadysigned
		b1.signForm(f2); //exception->gradeistoolow
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	system("leaks ex01");
	return 0;
}