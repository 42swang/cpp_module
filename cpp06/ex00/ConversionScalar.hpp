#ifndef CONVERSIONSCALAR_HPP
#define CONVERSIONSCALAR_HPP

#include <iostream>
#include <math.h>
#include <exception>

class ConversionScalar
{
private:
	double _value;
	bool _ischar;
	bool _isinf;
	bool _isnan;
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
	class ExceptCase : public std::exception
	{
	private:
		std::string _msg;
	public:
		ExceptCase(std::string msg);
		~ExceptCase() throw();
		const char* what() const throw();
	};
};

#endif