/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:38:35 by swang             #+#    #+#             */
/*   Updated: 2022/01/26 15:34:15 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	char		c;
	std::string	txt;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			txt = argv[i];
			for (int j = 0; j < (int)txt.length(); j++)
			{
				c = toupper(txt[j]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
}