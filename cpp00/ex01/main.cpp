/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cPP                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:57:23 by swang             #+#    #+#             */
/*   Updated: 2022/01/26 23:04:15 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	add = "ADD";
	std::string	search = "SEARCH";
	std::string exit = "EXIT";
	std::string	input;

	PhoneBook swang_phonebook;
	swang_phonebook.init_phonebook();
	std::cout << "------Swang's PhoneBook------" << std::endl;
	while (42)
	{
		std::cout << "> ";
		std::cin >> input;
		if (std::cin.fail()) //fail말고 플래그 찾아보기
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n'); // 무시할 최대 글자 수, 근데 개행문자 전까지 무시함 
			std::cout << "강제종료 됩니다\n";
			return (0);
		}
		else if (input.compare(add) == 0)
			swang_phonebook.add_contact();
		else if (input.compare(search) == 0)
			swang_phonebook.search_contact();
		else if (input.compare(exit) == 0)
			return (0);
		else
			std::cout << "잘못된 입력입니다" << std::endl;
	}
	return (0);
}