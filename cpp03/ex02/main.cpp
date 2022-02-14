/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:15 by swang             #+#    #+#             */
/*   Updated: 2022/02/11 12:18:37 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap d;
	FragTrap dcopy(d);
	FragTrap ft("ft");

	//임시객체를 만든 공간에 three라는 이름을 붙임 대입 아님 선언에 가까움
	//four가 이전에 만들어진게 아니라서 four에 three를 복사하는 복사 생성자 호출
	d = FragTrap("d");
	// 이건 d가 미리만들어져있으니까 대입오퍼레이터 호출
	// 대입연산자함수는 d.operator=()형태니까 당연히 d라는 객체가 이미 생성되어있어야함

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