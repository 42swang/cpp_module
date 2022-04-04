#include "ConversionScalar.hpp"

ConversionScalar::ConversionScalar() : _value(0), _ischar(false), _isinf(false), _isnan(false), _isprint(false)
{}

ConversionScalar::~ConversionScalar()
{}

ConversionScalar::ConversionScalar(std::string scalar) : _value(0), _ischar(false), _isinf(false), _isnan(false), _isprint(false)
{
	if (scalar.length() == 1 && isdigit(scalar[0]) == 0)
	{
		_value = scalar[0];
		_ischar = true;
	}
	else
		_value = atof(scalar.c_str());
	_isnan = isnan(_value);
	_isinf = isinf(_value);
	_isprint = isprint(_value);

}

ConversionScalar::ConversionScalar(const ConversionScalar& copy)
{
	*this = copy;	
}

ConversionScalar& ConversionScalar::operator=(const ConversionScalar& asign)
{
	if (this == &asign)
		return(*this);
	this->_value = asign._value;
	this->_ischar = asign._ischar;
	this->_isinf = asign._isinf;
	this->_isnan = asign._isnan;
	this->_isprint = asign._isprint;
	return (*this);
}

void ConversionScalar::toDouble() const
{
	double ret = static_cast<double>(_value);
	int jeongsu = static_cast<int>(_value);
	try
	{
		std::cout << "double: ";
		if (_isinf && _value < 0)
			throw Exception("-inf");
		else if (_isinf && _value > 0)
			throw Exception("+inf");
		else if (_isnan)
			throw Exception("nan");
		std::cout << ret;
		if (_ischar || ret - jeongsu == 0.0 ) //한글자거나 ret-정수부 뺐을 때 0.0이면 소수부 표현해주기
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void ConversionScalar::toChar() const
{
	double value;
	char ret;
	value = this->_value;
	ret = static_cast<char>(value);
	try
	{
		std::cout << "char: ";
		if (_isnan || _isinf || value < 0 || value > 127) //아스키 범위 이상
			throw Exception("impossible");
		else if (_isprint == false)
			throw Exception("Non displayable");
		else
			std::cout << "'" << ret << "'\n";
		
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	ConversionScalar::toInt() const
{
	int value;
	int ret;
	value = this->_value;
	ret = static_cast<int>(value);
	try
	{
		std::cout << "int: ";
		if (_isnan || _isinf || value < -2147483648 || value > 2147483637)
			throw Exception("impossible");
		else
			std::cout << ret << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void ConversionScalar::toFloat() const
{
	float value;
	float ret;
	int jeongsu;

	jeongsu = static_cast<int>(_value);
	ret = static_cast<float>(_value);
	try
	{
		std::cout << "float: ";
		if (_isnan)
			throw Exception("nanf");
		else if (_isinf && _value < 0)
			throw Exception("-inff");
		else if (_isinf && _value > 0)
			throw Exception("inff");
		else
			std::cout << ret;
		if (_ischar || ret - jeongsu == 0.0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}