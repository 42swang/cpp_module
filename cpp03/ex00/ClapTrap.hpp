/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:44:37 by swang             #+#    #+#             */
/*   Updated: 2022/02/09 21:30:27 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define C_NRML "\033[0m"
# define C_RED  "\033[31m" // attack, damage
# define C_GREN "\033[32m" // repair
# define C_YLLW "\033[33m" // called
# define C_BLUE "\033[34m" // name

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energypoint;
	unsigned int	_attackdamage;
public:
	ClapTrap(); //default constructor
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy); //copy constructor
	~ClapTrap(); //destructor
	ClapTrap&	operator=(const ClapTrap& claptrap); // assignation operator
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif