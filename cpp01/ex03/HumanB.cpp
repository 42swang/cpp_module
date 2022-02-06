/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:00:58 by swang             #+#    #+#             */
/*   Updated: 2022/02/06 18:29:00 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_)
: name(name_), weapon(NULL) {};

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon& weapon_)
{
	weapon = &weapon_;
}

void	HumanB::attack()
{
	std::cout << name;
	if (weapon != NULL)
	{
		std::cout << " attaks with his ";
		std::cout << weapon->getType() << std::endl;
	}
	else
		std::cout << " \"I'm not equipped with weapons.\"\n";
}