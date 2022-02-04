/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:13:35 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 20:06:30 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "extensive CONTEXTUAL INFORMATION.\n";
}

void Karen::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "contextual INFORMATION TO HELP TRACE execution in a production environment.\n";
}

void Karen::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "indicates a POTENTIAL PROBLEM in the system.\n";
}

void Karen::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "indicates a SERIOUS PROBLEM in the system.\n";
}

void Karen::complain(std::string level)
{
	std::string levelArr[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	void (Karen::*func[4])(void);

	func[0] = &Karen::debug;
	func[1] = &Karen::info;
	func[2] = &Karen::warning;
	func[3] = &Karen::error;

	for(int i = 0; i < 4; i++)
	{
		if (levelArr[i] == level)
		{
			(this->*func[i])();
			return ;
		}
	}
}
