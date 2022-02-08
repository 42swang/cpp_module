/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:47:27 by swang             #+#    #+#             */
/*   Updated: 2022/02/08 23:02:39 by swang            ###   ########.fr       */
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
//	객체를 생성하지 않고 클래스 이름만으로 함수를 호출하는 Fixed::min 의 형식으로 사용하려면 static으로 선언해야함.
	static Fixed&	min(Fixed& fix1, Fixed& fix2);
	static Fixed&	max(Fixed& fix1, Fixed& fix2);
	static const Fixed&	min(const Fixed& fix1, const Fixed& fix2);
	static const Fixed&	max(const Fixed& fix1, const Fixed& fix2);
//	ㄴ> static을 떼면 멤버함수처럼 a.min(a,b)로 사용할 수 있음
	~Fixed();
};

std::ostream&	operator<<(std::ostream& out, const Fixed& Fixed);

#endif