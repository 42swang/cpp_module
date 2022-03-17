#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "---------- construcotr exception check ------------\n";
	try
	{
		Bureaucrat b1("b1", 1); //생성자 정상 호출
		std::cout << b1; //name, grade 정상 호출
		Bureaucrat b2("b2", -1); //생성사 호출 시 에러 throw
		/*
			b2가 정상적으로 생성이되면 try 블럭이 끝나고 소멸자 호출됨,
			지금은 생성중에 예외가 throw되고, catch블럭이 실행됨
		*/
		// std::cout << b2; //name, grade 정상 호출
	}
	catch (std::exception & e) //베이스 클래스의 레퍼런스로 받음
	{
		std::cout << RED << e.what() << EOC << std::endl; // 가상함수니까 실제 어떤 타입에서 호출했는지 찾아갈 것
	}
	std::cout << std::endl;
	std::cout << "------- increase & decrease exception check --------\n";
	try
	{
		Bureaucrat b1("b1", 10);
		Bureaucrat b2("b2", 1);
		b1.decreaseGrade(140);
		b1.decreaseGrade(1);
		b2.increaseGrade(140); // b2는 생성자가 호출이 잘되었고 그 이후 스택이 반환됨
		//b1.increaseGrade(10);
		//b1.decreaseGrade(150);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	//system("leaks ex00");
	return 0;
}
