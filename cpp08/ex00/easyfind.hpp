#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

# define RED    "\033[0;31m"
# define EOC    "\033[0;0m"
# define GREEN  "\033[0;32m"

class NotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return "no occurrence is found";
	}
};

template <typename T>
typename T::iterator easyfind(T& container, const int value)
{
	// 못찾으면 last 반환
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw NotFoundException();
	return iter;
}

#endif