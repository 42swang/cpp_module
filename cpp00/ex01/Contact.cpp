/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:36:44 by swang             #+#    #+#             */
/*   Updated: 2022/01/26 23:02:13 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::init_contact()
{
	index = 0;
	first_name = "";
	last_name = "";
	nick_name = "";
	phone_number = "";
	darkest_secret = "";
}

void	Contact::set_index(int i)
{
	index = i;
}

int	Contact::get_index()
{
	return (index);
}

void	Contact::set_contact()
{
	std::cout << "Enter first_name : ";
	std::cin >> first_name;
	std::cout << "Enter last_name : ";
	std::cin >> last_name;
	std::cout << "Enter nick_name : ";
	std::cin >> nick_name;
	std::cout << "Enter phone_number : ";
	std::cin >> phone_number;
	std::cout << "Enter darkest_secret : ";
	std::cin >> darkest_secret;
}

void	Contact::print_contact(const char *str, int length)
{
	if (length <= 10)
	{
		while (length++ < 10)
			std::cout << '.';
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
}

void	Contact::print_table()
{
	std::cout << "|........." << index;
	std::cout << '|';
	print_contact(first_name.c_str(), (int)(first_name.length()));
	std::cout << '|';
	print_contact(last_name.c_str(), (int)(last_name.length()));
	std::cout << '|';
	print_contact(nick_name.c_str(), (int)(nick_name.length()));
	std::cout << '|' << std::endl;
}

void	Contact::print_search()
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nick_name << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}
