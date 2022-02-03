/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:47:25 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 13:01:26 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	my_name = "";
}

Zombie::~Zombie()
{
	std::cout << my_name << " is dead\n";
}

void	Zombie::set_name(std::string name)
{
	my_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << my_name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}