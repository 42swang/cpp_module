/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:11 by swang             #+#    #+#             */
/*   Updated: 2022/02/09 23:09:35 by swang            ###   ########.fr       */
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
	std::cout << "ScavTrap " << C_BLUE << "<" << _name << ">" << C_NRML << " appeard!!\n";
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
	std::cout << C_BLUE << "<" << this->_name << "> " << C_RED << "attack " << C_NRML;
	std::cout << C_BLUE << target << C_NRML << ", causing ";
	std::cout << C_RED << this->_attackdamage << C_NRML <<" damage!\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoint == 0)
	{
		std::cout << C_BLUE << "<" << _name << ">" << C_NRML << " need repair. Already " << C_RED << 0 << C_NRML << " HP" << std::endl;
		return ;
	}
	std::cout << C_BLUE << "<" << _name << ">" << C_NRML << " take " << C_RED << amount << C_NRML << " damage... ";
	if (this->_hitpoint <= amount)
		this->_hitpoint = 0;
	else
		this->_hitpoint -= amount;
	std::cout << C_BLUE << "<" << _name << ">" << C_NRML << "\'s HP is " << C_RED << _hitpoint << C_NRML << " point\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitpoint += amount;
	std::cout << C_BLUE << "<" << _name << "> " << C_GREN << amount << " point repaired. " << C_BLUE << "<" << _name << ">" << C_NRML << "\'s HP is " << C_GREN << _hitpoint << C_NRML << " point\n";
}

void	ScavTrap::guardGate()
{
	this->_guardmode = 1;
	std::cout << C_BLUE << "<" << _name << "> " << C_PRPL << "GuardMode ON\n" << C_NRML;
}