#ifndef CONVERSIONSCALAR_HPP
#define CONVERSIONSCALAR_HPP

#include <iostream>
#include <math.h>
#include <exception>

class ConversionScalar
{
private:
	double _value;
	bool _isnan;
	bool _isinf;
	bool _ischar;
	bool _isprint;
public:
	ConversionScalar();
	ConversionScalar(std::string scalar);
	~ConversionScalar();
	ConversionScalar(const ConversionScalar& copy);
	ConversionScalar& operator=(const ConversionScalar& asign);
	void toDouble() const;
	void toChar() const;
	void toInt() const;
	void toFloat() const;
	class Exception : public std::exception
	{
	private:
		std::string _msg;
	public:
		Exception(std::string msg)
		{
			_msg = msg;
		};
		~Exception() throw() {};
		const char* what() const throw()
		{
			return (_msg.c_str());
		}
	};
};

#endif