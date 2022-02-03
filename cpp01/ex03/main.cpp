/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:18:35 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 16:40:14 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon cluba = Weapon("crude spiked club");
		HumanA bob("Bob", cluba);
		bob.attack();
		cluba.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon knife = Weapon("knife");
		HumanA knifeman("knifeman", knife);
		knifeman.attack();
		knife.setType("sword");
		std::cout << knife.getType() << std::endl;
		knifeman.attack();
	}
	{
		Weapon clubb = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(clubb);
		jim.attack();
		clubb.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon bat = Weapon("bat");
		HumanB batman("batman");
		batman.setWeapon(bat);
		batman.attack();
		bat.setType("globe");
		std::cout << bat.getType() << std::endl;
		batman.attack();
	}
}