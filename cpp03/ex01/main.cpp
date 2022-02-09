/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:15 by swang             #+#    #+#             */
/*   Updated: 2022/02/09 23:14:02 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap sc;
	ScavTrap copy(sc);
	ScavTrap two("two");

	sc = ScavTrap("three");

	sc.attack("cpp-module1");
	copy.attack("cpp-module2");
	two.attack("blackhole");
	two.takeDamage(30);
	two.beRepaired(10);
	two.takeDamage(100); // 죽이기
	two.takeDamage(100); // 또 때리기
	two.guardGate();
	return (0);
}