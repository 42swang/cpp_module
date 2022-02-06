/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:18:35 by swang             #+#    #+#             */
/*   Updated: 2022/02/06 18:25:09 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  {
    Weapon club1 = Weapon("crude spiked club");
    HumanA bob("Bob", club1);
    bob.attack();
    club1.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
	jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
}