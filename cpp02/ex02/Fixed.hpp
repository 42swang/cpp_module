/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:47:27 by swang             #+#    #+#             */
/*   Updated: 2022/02/08 21:36:52 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	_value;
	static const int _bits;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixed);
	Fixed&	operator=(const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool	operator>(const Fixed& fixed);
	bool	operator<(const Fixed& fixed);
	bool	operator>=(const Fixed& fixed);
	bool	operator<=(const Fixed& fixed);
	bool	operator==(const Fixed& fixed);
	bool	operator!=(const Fixed& fixed);
	Fixed 	operator+(const Fixed& fixed);
	Fixed 	operator-(const Fixed& fixed);
	Fixed 	operator*(const Fixed& fixed);
	Fixed 	operator/(const Fixed& fixed);
	Fixed& 	operator++();
	Fixed& 	operator--();
	Fixed 	operator++(int);
	Fixed 	operator--(int);
	static Fixed&	min(Fixed& fix1, Fixed& fix2);
	static const Fixed&	min(const Fixed& fix1, const Fixed& fix2);
//두 개의 고정 소수점 값 참조를 받아 가장 작은 값의 참조를 반환하는 [정적] 멤버 함수 min과
//두 개의 고정 소수점 (상수) 값의 참조를 받아 가장 작은 (상수) 값의 참조를 반환하는 오버로딩
	static Fixed&	max(Fixed& fix1, Fixed& fix2);
	static const Fixed&	max(const Fixed& fix1, const Fixed& fix2);
//두 개의 고정 소수점 값 참조를 받아 가장 큰 값의 참조를 반환하는 정적 멤버 함수 max와,
//두 개의 고정 소수점 상수 값의 참조를 받아 가장 큰 상수 값의 참조를 반환하는 오버로딩
	~Fixed();
};

std::ostream&	operator<<(std::ostream& out, const Fixed& Fixed);

#endif