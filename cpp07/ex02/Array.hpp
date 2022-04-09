#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

#define RED "\033[1;31m"
#define EOC "\033[0;0m"

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;
public:
	Array()
	{
		std::cout << "default constructor called\n";
		_size = 0;
		_array = new T();
	};
	Array(unsigned int n)
	{
		std::cout << "constructor(unsigned int n) called\n";
		_size = n;
		_array = new T[n];
	};
	Array(const Array& other)
	{
		std::cout << "copy constructor called\n";
		this->_size = other._size;
		this->_array = new T[other._size];
		for (unsigned i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
	}; //deep
	Array& operator=(const Array& other)
	{
		std::cout << "operator= called\n";
		if (this == &other)
			return (*this);
		if (this->_array != 0) //내가 이미 배열을 가지고 있다면
			delete[] this->_array;
		this->_size = other._size;
		this->_array = new T[other._size];
		for (unsigned i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
		return (*this);
	}; //deep
	~Array()
	{
		delete[] this->_array;
		std::cout << "called destructor\n";
	};
	unsigned int size() const
	{
		return this->_size;
	};
	T& operator[](unsigned int i)
	{
		if (i < 0 || i >= this->_size)
			throw OutofIndexRangeException();
		else
			return this->_array[i];
	};
	const T& operator[](unsigned int i) const
	{
		if (i < 0 || i >= this->_size)
			throw OutofIndexRangeException();
		else
			return this->_array[i];
	};
	class OutofIndexRangeException : public std::exception
	{
		const char * what() const throw()
		{
			return "index is out of bounds\n";
		};
	};
};

#endif