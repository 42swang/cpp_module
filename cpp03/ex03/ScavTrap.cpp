/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:11 by swang             #+#    #+#             */
/*   Updated: 2022/02/23 15:39:05 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << C_PRPL << "default constructor called... " << C_NRML;
	std::cout << "ScavTrap " << C_BLUE << "<default> " << C_NRML << "appeard!!\n";
	_hitpoint = 100;
	_energypoint = 50;
	_attackdamage = 20;
	_guardmode = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << C_PRPL << "constructor(parameter of name) called... " << C_NRML;
	std::cout << "ScavTrap " << C_BLUE << "<" << name << "> " << C_NRML << "appeard!!\n";
	_hitpoint = 100;
	_energypoint = 50;
	_attackdamage = 20;
	_guardmode = 0;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << C_PRPL << "copy constructor called... " << C_NRML << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	std::cout << C_PRPL <<  "assignation operator called... " << C_NRML << std::endl;
	if (this == &scavtrap)
		return (*this);
	_guardmode = scavtrap._guardmode;
	_name = scavtrap._name;
	_hitpoint = scavtrap._hitpoint;
	_energypoint = scavtrap._energypoint;
	_attackdamage = scavtrap._attackdamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << C_PRPL << "destructor called... " << C_NRML;
	std::cout << "ScavTrap " << C_BLUE << "<" << _name << ">" << C_NRML << " destroyed\n";
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << C_PRPL<< "<" << this->_name << "> attack " << target << ", causing ";
	std::cout << this->_attackdamage <<" damage!\n" << C_NRML;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoint == 0)
	{
		std::cout << C_PRPL << "<" << _name << "> need repair. Already 0 HP" << C_NRML << std::endl;
		return ;
	}
	std::cout << C_PRPL << "<" << _name << "> take " << amount << " damage... ";
	if (this->_hitpoint <= amount)
		this->_hitpoint = 0;
	else
		this->_hitpoint -= amount;
	std::cout << "<" << _name << ">\'s HP is " << _hitpoint << " point\n" << C_NRML;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitpoint += amount;
	std::cout << "<" << _name << "> " << amount << " point repaired. <" << _name << ">\'s HP is " << _hitpoint << " point\n";
}

void	ScavTrap::guardGate()
{
	if (this->_hitpoint == 0)
	{
		std::cout << C_PRPL<< "<" << _name << "> can't be GuardMode\n" << C_NRML;
		return;
	}
	this->_guardmode = 1;
	std::cout << C_PRPL << "<" << _name << "> GuardMode ON\n" << C_NRML;
}