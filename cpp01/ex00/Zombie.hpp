/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:44:06 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 12:36:54 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private :
	std::string my_name;
public :
	void	announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif