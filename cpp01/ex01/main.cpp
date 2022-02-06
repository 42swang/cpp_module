/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:29:15 by swang             #+#    #+#             */
/*   Updated: 2022/02/06 13:37:21 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* ptr;

	ptr = zombieHorde(3, "zombiez");
	for (int i = 0; i < 3; i++)
		ptr[i].announce();
	delete []ptr;
	return (0);
}