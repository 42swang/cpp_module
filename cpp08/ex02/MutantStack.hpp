#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

# define RED    "\033[0;31m"
# define EOC    "\033[0;0m"
# define GREEN  "\033[0;32m"

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : MutantStack<T>::stack() {};
	MutantStack(const MutantStack& other): MutantStack<T>::stack(other) {};
	MutantStack& operator=(const MutantStack& other)
	{
		if (this == &other)
			return *this;
		MutantStack<T>::stack::operator=(other);
		return *this;
	};
	~MutantStack() {};
	
	//이터레이터 이름지정
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
	//이터레이터
	iterator begin() { return this->c.begin(); };
	const_iterator begin() const {return this->c.begin(); };
	iterator end() { return this->c.end(); };
	const_iterator end() const { return this->c.end(); };
	
	reverse_iterator rbegin() { return this->c.rbegin(); };
	const_reverse_iterator rbegin() const { return this->c.rbegin(); };
	reverse_iterator rend() { return this->c.rend(); };
	const_reverse_iterator rend() const { return this->c.rend(); };
};

#endif