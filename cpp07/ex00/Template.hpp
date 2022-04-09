#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define YELLOW "\033[1;33m"
# define EOC    "\033[0;0m"

template <typename T>

void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>

T min(T a, T b)
{
	if (a >= b)
		return b;
	else
		return a;
}

template <typename T>

T max(T a, T b)
{
	if (a <= b)
		return b;
	else
		return a;
}

#endif