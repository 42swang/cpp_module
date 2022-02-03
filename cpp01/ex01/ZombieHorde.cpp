/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:30:00 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 13:16:29 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* arr = new Zombie[N];
	std::string tmp;

	for(int i = 0; i < N; i++)
		arr[i].set_name(name + (std::to_string(i)));
	return (arr);
}