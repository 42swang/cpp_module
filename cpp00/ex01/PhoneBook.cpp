/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:05:50 by swang             #+#    #+#             */
/*   Updated: 2022/01/26 20:11:34 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::init_phonebook()
{
	for (int i = 0; i < 8; i++)
		contact[i].init_contact();
}

void	PhoneBook::add_contact()
{
	int	i;

	i = 0;
	while (i < 8 && contact[i].get_index() != 0)
		i++;
	//if (i == 8)
	//	remove_old_contact();
	contact[i].set_contact(i);
}