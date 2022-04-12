#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <vector>
#include <exception>
#include <iostream>

# define RED    "\033[0;31m"
# define EOC    "\033[0;0m"
# define GREEN  "\033[0;32m"

class Span
{
private:
	unsigned int _max_size;
	std::vector<int> _container; 
	Span();
public:
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	long shortestSpan() const;
	long longestSpan() const;

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	
	unsigned int getSize() const;
	std::vector<int> getVec() const;
	void printVec() const;

	class BeFullException: public std::exception
	{
		const char* what() const throw();
	};
	class AlreadyFullException: public std::exception
	{
		const char* what() const throw();
	};
	class NoNumbersStoreException: public std::exception
	{
		const char* what() const throw();
	};
	class OnlyOneException: public std::exception
	{
		const char* what() const throw();
	};
	class NoSpan : public std::exception
	{
		const char* what() const throw();
	};
};

#endif