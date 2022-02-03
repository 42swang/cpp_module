/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:44:01 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 15:14:07 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type)
{
	type = w_type;
}

const std::string& Weapon::getType()
{
	std::string& ref = type;
	return (ref);
}

void	Weapon::setType(std::string set_type)
{
	type = set_type;
}

Weapon::~Weapon()
{
	
}