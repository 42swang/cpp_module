/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:44:31 by swang             #+#    #+#             */
/*   Updated: 2022/02/09 21:30:24 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoint(10), _energypoint(10), _attackdamage(0)
{
	std::cout << C_YLLW << "default constructor called... " << C_NRML;
	std::cout << "ClapTrap " << C_BLUE << "<default> " << C_NRML << "appeard!!\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energypoint(10), _attackdamage(0)
{
	std::cout << C_YLLW << "constructor(parameter of name) called... " << C_NRML;
	std::cout << "ClapTrap " << C_BLUE << "<" << _name << ">" << C_NRML << " appeard!!\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << C_YLLW << "copy constructor called... " << C_NRML << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << C_YLLW << "destructor called... " << C_NRML;
	std::cout << "ClapTrap " << C_BLUE << "<" << _name << ">" << C_NRML << " destroyed\n";
}


ClapTrap&	ClapTrap::operator=(const ClapTrap& claptrap)
{
	std::cout << C_YLLW <<  "assignation operator called... " << C_NRML << std::endl;
	if(this == &claptrap)
		return (*this);
	this->_name = claptrap._name;
	this->_hitPoint = claptrap._hitPoint;
	this->_energypoint = claptrap._energypoint;
	this->_attackdamage = claptrap._attackdamage;
	return *this;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << C_BLUE << "<" << this->_name << "> " << C_RED << "attack " << C_NRML;
	std::cout << C_BLUE << target << C_NRML << ", causing ";
	std::cout << C_RED << this->_attackdamage << C_NRML <<" damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << C_BLUE << "<" << _name << ">" << C_NRML << " need repair. Already " << C_RED << 0 << C_NRML << " HP" << std::endl;
		return ;
	}
	std::cout << C_BLUE << "<" << _name << ">" << C_NRML << " take " << C_RED << amount << C_NRML << " damage... ";
	if (this->_hitPoint <= amount)
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << C_BLUE << "<" << _name << ">" << C_NRML << "\'s HP is " << C_RED << _hitPoint << C_NRML << " point\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoint += amount;
	std::cout << C_BLUE << "<" << _name << "> " << C_GREN << amount << " point repaired. " << C_BLUE << "<" << _name << ">" << C_NRML << "\'s HP is " << C_GREN << _hitPoint << C_NRML << " point\n";
}