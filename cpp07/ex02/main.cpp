#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    
	int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
		//복사생성자
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		//tmp = numbers;
		//깊은 복사로 다른 데이터를 가져야 함
	}

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << RED << "didn't save the same value!!" << EOC << std::endl;
            return 1;
        }
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << EOC << '\n';
    }
    try
    {
		//널 값 자리를 침범하면 안됨
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << EOC << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	const Array<double> arr3(3);
	for(unsigned int i = 0; i < arr3.size() ; i++)
		std::cout<< arr3[i] << '\n';
	std::cout<<'\n';
    return 0;
}