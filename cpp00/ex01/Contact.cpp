/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:36:44 by swang             #+#    #+#             */
/*   Updated: 2022/01/26 20:11:21 by swang            ###   ########.fr       */
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

void	Contact::set_contact(int i)
{
	index = i;
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