/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:47:27 by swang             #+#    #+#             */
/*   Updated: 2022/02/08 00:47:50 by swang            ###   ########.fr       */
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
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed(const int value);
	Fixed(const float value);
	Fixed& operator=(const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& Fixed);
// 덧셈 오버로딩처럼 왼쪽 오른쪽 값이 자동으로 들어감

#endif