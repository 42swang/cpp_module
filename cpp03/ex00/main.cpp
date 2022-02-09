/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:37:30 by swang             #+#    #+#             */
/*   Updated: 2022/02/09 13:31:36 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap d;
	ClapTrap copy(d);
	ClapTrap one("one");

	one.attack("blackhole");
	one.takeDamage(3);
	one.beRepaired(10); //초기보다 피가 많아짐
	one.takeDamage(100); // 죽이기
	one.takeDamage(100); // 또 때리기
	return (0);
}