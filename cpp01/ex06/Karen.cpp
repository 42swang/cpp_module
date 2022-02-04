/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:13:35 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 19:52:07 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void)
{
	std::cout << "DEBUG1\n";
}

void Karen::info(void)
{
	std::cout << "INFO2\n";
}

void Karen::warning(void)
{
	std::cout << "WARNING3\n";
}

void Karen::error(void)
{
	std::cout << "ERROR4\n";
}

void Karen::filter(std::string level)
{
	std::string levelArr[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	void (Karen::*func[4])(void);
	int	idx = 5;

	func[0] = &Karen::debug;
	func[1] = &Karen::info;
	func[2] = &Karen::warning;
	func[3] = &Karen::error;

	for(int i = 0; i < 4; i++)
	{
		if (levelArr[i] == level)
			idx = i;
	}
	if (idx == 5)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return ;
	}
	switch(idx)
	{
		case 0:
			(this->*func[0])();
		case 1:
			(this->*func[1])();
		case 2:
			(this->*func[2])();
		case 3:
			(this->*func[3])();
	}
}
