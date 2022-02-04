/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:56:38 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 19:34:42 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen karen;

	for (int i = 0; i < 4; i++)
	{
		karen.complain("DEBUG");
		karen.complain("INFO");
		karen.complain("WARNING");
		karen.complain("ERROR");
	}

	return (0);
}
