/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:48 by swang             #+#    #+#             */
/*   Updated: 2022/02/23 15:33:00 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << C_GREN << "default constructor called... " << C_NRML;
	std::cout << "DiamondTrap " << C_BLUE << "<default> " << C_NRML << "appeard!!\n";

	_name = "default";
	this->ClapTrap::_name = _name + "default_clap_name";
	this->ScavTrap::_name = _name + "default_clap_name";
	this->FragTrap::_name = _name + "default_clap_name";
	_hitpoint = this->FragTrap::_hitpoint;
	_energypoint = this->ScavTrap::_energypoint;
	_attackdamage = this->FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name")
{
	std::cout << C_GREN << "constructor(parameter of name) called... " << C_NRML;
	std::cout << "DiamondTrap " << C_BLUE << "<" << name << "> " << C_NRML << "appeard!!\n";
	this->_name = name;
	_hitpoint = this->FragTrap::_hitpoint;
	_energypoint = this->ScavTrap::_energypoint;
	_attackdamage = this->FragTrap::_attackdamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << C_GREN << "destructor called... " << C_NRML;
	std::cout << "DiamondTrap " << C_BLUE << "<" << _name << ">" << C_NRML << " destroyed\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << C_GREN << "copy constructor called... " << C_NRML << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & diamondtrap)
{
	std::cout << C_GREN <<  "assignation operator called... " << C_NRML << std::endl;
	if (this == &diamondtrap)
		return (*this);
	_name = diamondtrap._name;
	ClapTrap::_name = diamondtrap.ClapTrap::_name;
	_hitpoint = diamondtrap.FragTrap::_hitpoint;
	_energypoint = diamondtrap.ScavTrap::_energypoint;
	_attackdamage = diamondtrap.FragTrap::_attackdamage;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	ScavTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI()
{
	std::cout << C_GREN << "My name is <" << _name << ">...  ";
	std::cout << "ClapTrap name is <" << ClapTrap::_name << ">..." << C_NRML << std::endl;
}