#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N)
{
	_max_size = N;
}

Span::Span(const Span& other) : _max_size(other._max_size), _container(other._container) {}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	_max_size = other._max_size;
	_container = other._container;
	return *this;
}

Span::~Span() {}

void Span::printVec() const
{
	std::cout << "------printVec--------\n";
	for (int i = 0; i < static_cast<int>(_container.size()); ++i)
		std::cout << _container[i] << " ";
	std::cout << "\n----------------------\n";
}

std::vector<int> Span::getVec() const
{
	return _container;
}

unsigned int Span::getSize() const
{
	return _max_size;
}

//정렬 후 제일 작은 격차를 찾아냄, 1,10000, 20000, 20001 이렇게 정렬되어있으면 shortspan은 1
long Span::shortestSpan() const
{
	if (_container.empty())
		throw NoNumbersStoreException();
	if (_container.size() == 1)
		throw OnlyOneException();
	std::vector<int> v = _container;
	//원본 보호
	std::sort(v.begin(), v.end());
	std::vector<int>::iterator it = v.begin();
	long short_span = LONG_MAX;
	long span = 0;
	while (it != v.end() - 1)
	{
		if (*it > *(it + 1))
			span = static_cast<long>(*it) - static_cast<long>(*(it + 1));
		else
			span = static_cast<long>(*(it + 1)) - static_cast<long>(*it);
		if (span < short_span)
			short_span = span;
		++it;
	}
	return (short_span);
}

long Span::longestSpan() const
{
	if (_container.empty())
		throw NoNumbersStoreException();
	if (_container.size() == 1)
		throw OnlyOneException();
	// 원본 보호
	std::vector<int> v = _container;
	std::sort(v.begin(), v.end());
	long long_span = static_cast<long>(v.back()) - static_cast<long>(v.front());
	return (long_span);
}

void Span::addNumber(int num)
{
	if (_container.size() >= _max_size)
		throw AlreadyFullException();
	_container.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	unsigned int add_len = std::distance(begin, end);
	if (add_len + static_cast<unsigned int>(_container.size()) > _max_size)
		throw BeFullException();
	_container.insert(_container.end(), begin, end);
}

const char* Span::AlreadyFullException::what() const throw()
{
	return "Already full!!\n";
}

const char* Span::NoNumbersStoreException::what() const throw()
{
	return "Empty\n";
}

const char* Span::OnlyOneException::what() const throw()
{
	return "Only one element\n";
}

const char* Span::NoSpan::what() const throw()
{
	return "no span can be found\n";
}

const char* Span::BeFullException::what() const throw()
{
	return "add size too long. Will be full\n";
}