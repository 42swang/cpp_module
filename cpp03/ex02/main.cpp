/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:15 by swang             #+#    #+#             */
/*   Updated: 2022/03/01 20:14:25 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap d;
	FragTrap dcopy(d);
	FragTrap ft("ft");

	d = FragTrap("d");

	d.attack("cpp-module1");
	dcopy.attack("cpp-module2");
	ft.attack("blackhole");
	ft.takeDamage(50);
	ft.highFivesGuys();
	ft.beRepaired(30);
	ft.takeDamage(1000); // 죽이기
	ft.takeDamage(100); // 또 때리기
	ft.highFivesGuys();
	return (0);
}