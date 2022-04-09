#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*func)(const T &))
{
	for (int i = 0; i < len; i++)
	{
		(*func)(array[i]);
	}
};
// const 레퍼런스를 사용하는 이유: 불필요한 복사의 과정을 진행하지 않고 바로 사용, 그러나 원본훼손 방지

template <typename T>
void PrintFunc(const T &a)
{
	std::cout << a << std::endl;
}

#endif