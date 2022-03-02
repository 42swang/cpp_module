/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:15 by swang             #+#    #+#             */
/*   Updated: 2022/03/01 20:12:11 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap d;
	ScavTrap dcopy(d);
	ScavTrap two("two");

	ScavTrap three = ScavTrap("three");
	ScavTrap four = three;
	d = ScavTrap("d");

	d.attack("cpp-module1");
	dcopy.attack("cpp-module2");
	two.attack("blackhole");
	two.takeDamage(30);
	two.beRepaired(10);
	two.takeDamage(100); // 죽이기
	two.takeDamage(100); // 또 때리기
	two.guardGate();
	return (0);
}