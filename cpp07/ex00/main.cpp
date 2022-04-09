#include "Template.hpp"
#include <iostream>


class Awesome
{
public:
	Awesome() : _n(0){}
	Awesome(int n): _n(n){}
	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	int  getN() const {return(_n);}
private:
	int _n;
};
std::ostream& operator<<(std::ostream& o, const Awesome &a) { o << a.getN(); return o;}

int main( void )
{
	
	// int a = 2;
	// int b = 3;
	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// return 0;

	Awesome a(2), b(4);
	swap(a,b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a,b) << std::endl;
	std::cout << min(a,b) << std::endl;
	return 0;
}