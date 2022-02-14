/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:44:37 by swang             #+#    #+#             */
/*   Updated: 2022/02/12 23:13:03 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define C_NRML "\033[0m"
# define C_RED  "\033[31m" 
# define C_GREN "\033[32m"
# define C_YLLW "\033[33m" // clap
# define C_BLUE "\033[34m"
# define C_PRPL "\033[35m" // scav
# define C_AQUA "\033[36m" // frag

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitpoint;
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