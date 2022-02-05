/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:54:57 by swang             #+#    #+#             */
/*   Updated: 2022/02/05 14:02:16 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon& weapon_)
: name(name_), weapon(weapon_) {};

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << name;
	std::cout << " attaks with his ";
	std::cout << weapon.getType() << std::endl;
}