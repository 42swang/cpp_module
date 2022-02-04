/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:56:38 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 19:55:12 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Need log level\n";
		return (0);
	}
	else if (argc > 2)
	{
		std::cout << "too many argument\n";
		return (0);
	}
	Karen karen;

	karen.filter(argv[1]);
	return (0);
}
