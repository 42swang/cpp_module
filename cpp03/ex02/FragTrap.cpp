/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:49:53 by swang             #+#    #+#             */
/*   Updated: 2022/03/01 20:11:33 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << C_AQUA << "default constructor called... " << C_NRML;
	std::cout << "FragTrap " << C_BLUE << "<default> " << C_NRML << "appeard!!\n";
	_name = "default";
	_hitpoint = 100;
	_energypoint = 100;
	_attackdamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << C_AQUA << "constructor(parameter of name) called... " << C_NRML;
	std::cout << "FragTrap " << C_BLUE << "<" << name << "> " << C_NRML << "appeard!!\n";
	_hitpoint = 100;
	_energypoint = 100;
	_attackdamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << C_AQUA << "destructor called... " << C_NRML;
	std::cout << "FragTrap " << C_BLUE << "<" << _name << ">" << C_NRML << " destroyed\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << C_AQUA << "copy constructor called... " << C_NRML << std::endl;
	*this = copy;
}

FragTrap & FragTrap::operator=(const FragTrap& fragtrap)
{
	std::cout << C_AQUA <<  "assignation operator called... " << C_NRML << std::endl;
	if (this == &fragtrap)
		return (*this);
	_name = fragtrap._name;
	_hitpoint = fragtrap._hitpoint;
	_energypoint = fragtrap._energypoint;
	_attackdamage = fragtrap._attackdamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitpoint == 0)
	{
		std::cout << C_AQUA << "I can't High-Five.. I need Repair...\n" << C_NRML;
		return ;
	}
	std::cout << C_AQUA << "I Love You Guys! High-Five?!" << C_NRML << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << C_AQUA << "<" << this->_name << "> attack " << target << ", causing ";
	std::cout << this->_attackdamage <<" damage!\n" << C_NRML;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoint == 0)
	{
		std::cout << C_AQUA << "<" << _name << "> need repair. Already 0 HP" << C_NRML << std::endl;
		return ;
	}
	std::cout << C_AQUA << "<" << _name << "> take " << amount << " damage... ";
	if (this->_hitpoint <= amount)
		this->_hitpoint = 0;
	else
		this->_hitpoint -= amount;
	std::cout << "<" << _name << ">\'s HP is " << _hitpoint << " point\n" << C_NRML;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitpoint += amount;
	std::cout << C_AQUA << "<" << _name << "> " << amount << " point repaired. <" << _name << ">\'s HP is " << _hitpoint << " point\n" << C_NRML;
}