/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:44:04 by swang             #+#    #+#             */
/*   Updated: 2022/02/25 11:23:13 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private :

public :
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap & operator=(const FragTrap& fragtrap);
	FragTrap(std::string name);
	void	highFivesGuys(void);
	void 	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif