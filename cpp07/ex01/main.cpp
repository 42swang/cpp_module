#include "iter.hpp"

template <typename T>
void print(T const &x)
{
    std::cout << x << '\n';
    return;
}

class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
    o << rhs.get();
    return o;
}

int main()
{
	int tab[] = {0,1,2,3,4};
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
	// std::cout<< "--------------------intArr-----------------------\n";
	// int intArr[5] = {1, 2, 3, 4, 5};
	// iter(intArr, 5, PrintFunc);
	// std::cout << std::endl;

	// std::cout<< "--------------------floatArr-----------------------\n";
	// float floatArr[5] = {0.1f, 0.2f, 0.3f, 0.4f, 0.5f};
	// iter(floatArr, 5, PrintFunc);
	// std::cout << std::endl;

	// std::cout<< "--------------------doubleArr-----------------------\n";
	// double doubleArr[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
	// iter(doubleArr, 5, PrintFunc);
	// std::cout << std::endl;

	// std::cout<< "--------------------charArr-----------------------\n";
	// char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
	// iter(charArr, 5, PrintFunc);
	// std::cout << std::endl;

	// std::cout<< "--------------------strArr-----------------------\n";
	// std::string strArr[5] = {"Hello", "How", "Are", "You", "Today?"};
	// iter(strArr, 5, PrintFunc);
	// std::cout << std::endl;

	// return 0;
}