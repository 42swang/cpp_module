#include "ConversionScalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Check Argument\n"; 
		return (0);
	}
	try
	{
		ConversionScalar convert(argv[1]);
		convert.toChar();
		convert.toInt();
		convert.toFloat();
		convert.toDouble();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}