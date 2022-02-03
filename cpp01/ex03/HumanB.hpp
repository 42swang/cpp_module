/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:01:03 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 16:28:02 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weapon;
public:
	void	attack();
	HumanB(std::string name_);
	void	setWeapon(Weapon& weapon_);
	~HumanB();
};

#endif