/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:47:08 by swang             #+#    #+#             */
/*   Updated: 2022/02/08 02:49:27 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const int value) : _value(value << _bits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value) : _value((int)roundf(value * (1 << _bits)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called\n";
	if (this == &fixed)
		return *this;
	_value = fixed.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
	//고정소수점 값을 부동소수점으로 바꾼다
}

int		Fixed::toInt(void) const
{
	return _value >> _bits;
	//고정소수점 값을 정수 값으로 바꿔준다
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
	//고정소수점 값의 부동소수점 표현을 출력스트림파라미터에 입력.
}
