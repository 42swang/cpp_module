/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:47:08 by swang             #+#    #+#             */
/*   Updated: 2022/02/08 21:32:12 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const int value) : _value(value << _bits) {}

Fixed::Fixed(const float value) : _value((int)roundf(value * (1 << _bits))) {}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	if (this == &fixed)
		return *this;
	_value = fixed.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
}

int		Fixed::toInt(void) const
{
	return _value >> _bits;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed ret(this->toFloat() + fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed ret(this->toFloat() - fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed ret(this->toFloat() * fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return (ret);
}

bool	Fixed::operator>(const Fixed& fixed)
{
	if (this->_value > fixed._value)
		return (true);
	else
		return (false);
}
// ??????????????? float????????? ????????? ??????

bool	Fixed::operator<(const Fixed& fixed)
{
	if (this->_value < fixed._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed& fixed)
{
	if (this->_value >= fixed._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed& fixed)
{
	if (this->_value <= fixed._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed& fixed)
{
	if (this->_value == fixed._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed& fixed)
{
	if (this->_value != fixed._value)
		return (true);
	else
		return (false);
}
//????????? ?????????????????? ????????? ??????????????? value ?????????

Fixed& 	Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed& 	Fixed::operator--()
{
	--_value;
	return (*this);
}
// ?????????????????? ?????? ??? ??????

Fixed 	Fixed::operator++(int)
{	
	Fixed ret = *this;
	_value++;
	return (ret);
}

Fixed 	Fixed::operator--(int)
{
	Fixed ret = *this;
	_value--;
	return (ret);
}
// ?????????????????? ?????? ??? ??????(??????)??? ??? ??????

Fixed&	Fixed::min(Fixed& fix1, Fixed& fix2)
{
	if (fix1.getRawBits() <= fix2.getRawBits())
		return (fix1);
	else
		return (fix2);
}

const Fixed&	Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.getRawBits() <= fix2.getRawBits())
		return (fix1);
	else
		return (fix2);
}

Fixed&	Fixed::max(Fixed& fix1, Fixed& fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return (fix1);
	else
		return (fix2);
}

const Fixed&	Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return (fix1);
	else
		return (fix2);
}