/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:44:06 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 13:00:36 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private :
	std::string	my_name;
public :
	void	announce(void);
	void	set_name(std::string name);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif