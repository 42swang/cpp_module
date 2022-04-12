#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	//[5 3 5 737 0]
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it; //5->3
	--it; //5<-3
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
		//5->3->5->737->0
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);
	while (s.size() > 0)
	{
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl;
	
	return 0;
}