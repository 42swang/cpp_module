/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:38:05 by swang             #+#    #+#             */
/*   Updated: 2022/02/03 15:11:47 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	const std::string& getType();
	void	setType(std::string set_type);
	Weapon(std::string w_type);
	~Weapon();
};

#endif