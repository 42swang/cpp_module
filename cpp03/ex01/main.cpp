/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:15 by swang             #+#    #+#             */
/*   Updated: 2022/02/11 11:12:35 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap d;
	ScavTrap dcopy(d);
	ScavTrap two("two");

	ScavTrap three = ScavTrap("three");
	//임시객체를 만든 공간에 three라는 이름을 붙임 대입 아님 선언에 가까움
	ScavTrap four = three;
	//four가 이전에 만들어진게 아니라서 four에 three를 복사하는 복사 생성자 호출
	d = ScavTrap("d");
	// 이건 d가 미리만들어져있으니까 대입오퍼레이터 호출
	// 대입연산자함수는 d.operator=()형태니까 당연히 d라는 객체가 이미 생성되어있어야함

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