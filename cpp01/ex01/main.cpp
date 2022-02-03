/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:29:15 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 13:10:28 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	i;
	Zombie* ptr;

	i = 0;
	ptr = zombieHorde(3, "zombiez");
	for (int i = 0; i < 3; i++)
		ptr[i].announce();
	delete []ptr;
	return (0);
}