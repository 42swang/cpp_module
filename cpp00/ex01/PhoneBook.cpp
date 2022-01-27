/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:05:50 by swang             #+#    #+#             */
/*   Updated: 2022/01/27 12:44:03 by swang            ###   ########.fr       */
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
	if (i == 8)
	{
		for (int j = 0; j < 7; j++)
		{
			contact[j] = contact[j + 1];
			contact[j].set_index(j + 1);
		}
		i = 7;
	}
	contact[i].set_index(i + 1);
	contact[i].set_contact();
}

void	PhoneBook::search_contact()
{
	int	search_num;
	int	i;

	i = 0;
	std::cout << "|.....index|first_name|.last_name|.nick_name|" << std::endl;
	while (i < 8 && contact[i].get_index() != 0)
	{
		contact[i].print_table();
		i++;
	}
	while(42)
	{
		std::cout << "Please Enter Index : ";
		std::cin >> search_num;
		if (std::cin.eof())
			return ;
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Please Enter Number\n";
		}
		else if (search_num == 0)
			return ;
		else if (search_num < i + 1)
		{
			contact[search_num - 1].print_search();
			return ;
		}
		else
			std::cout << "Nothing.. Enter 0 : go back\n";
	}
}