/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:15 by swang             #+#    #+#             */
/*   Updated: 2022/02/23 15:37:30 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap = yello
    // ScavTrap = purple
    // FragTrap = aqua
    // DiamondTrap = green

   	DiamondTrap diamond; //default constructor
    std::cout << std::endl;

    DiamondTrap diamond2("diamond2"); //name constructor
    std::cout << std::endl;

    DiamondTrap diamond3(diamond2); //copy constructor
    std::cout << std::endl;

    diamond = diamond3; //assignation operator
    std::cout << std::endl;


	//hp : fragtrap 100
	//ep : scavtrap 50
	//attack damege : fragtrap 30
	//attack : scavtrap
    diamond.attack("monster"); // call scavtrap's attack
    std::cout << std::endl;
    diamond.takeDamage(50); // call scavtrap's takeDamage
    std::cout << std::endl;
    diamond.guardGate(); //scavtrap
    std::cout << std::endl;
    diamond.highFivesGuys(); //fragtrap
    std::cout << std::endl;
    diamond.whoAmI(); //diamond + claptrap;
    std::cout << std::endl;
}