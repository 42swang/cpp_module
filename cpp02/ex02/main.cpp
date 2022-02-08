/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:45:59 by swang             #+#    #+#             */
/*   Updated: 2022/02/08 23:02:37 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << b << std::endl;
	std::cout << std::endl;

//	b가 const 이므로 매개변수가 const인 max, min함수를 호출함
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl; //0.0078125
//	const가 아닌 Fixed c;를 인자로 넣으면 매개변수가 const가 아닌 max, min함수를 호출함 
//	std::cout << Fixed::max(a, c) << std::endl;
    std::cout << std::endl;

    std::cout << --a << std::endl; //0.00390625
    std::cout << a << std::endl; //0.00390625
    std::cout << a-- << std::endl; //0.00390625
    std::cout << a << std::endl; //0
    std::cout << std::endl;

    std::cout << (a > b) << std::endl; // 0
    std::cout << (a < b) << std::endl; //1
    std::cout << (a <= b) << std::endl; //1
    std::cout << (a >= b) << std::endl; //0
    std::cout << (a == b) << std::endl; //0
    std::cout << (a != b) << std::endl; //1
    std::cout << std::endl;
	
    Fixed plus = a + b;
    std::cout << plus << std::endl; //10.1016
    std::cout << a - b << std::endl; //-10.1016
    std::cout << a * b << std::endl; //0
    std::cout << a / b << std::endl; //0
    std::cout << std::endl;
	return 0;
}