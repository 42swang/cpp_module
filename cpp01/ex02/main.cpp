/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:19:34 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 14:33:24 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address in memory of string : " << &string << std::endl;
	std::cout << "using stringPTR : " << stringPTR << std::endl;
	std::cout << "using stringREF : " << &stringREF << std::endl;

	std::cout << "string using the pointer : " << *stringPTR << std::endl;
	std::cout << "string using the reference : " << stringREF << std::endl;
}