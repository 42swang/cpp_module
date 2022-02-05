/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:56:38 by swang             #+#    #+#             */
/*   Updated: 2022/02/05 16:34:06 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen karen;

	karen.complain("DEBUG");
	std::cout << "\n\n";
	karen.complain("INFO");
	std::cout << "\n\n";
	karen.complain("WARNING");
	std::cout << "\n\n";
	karen.complain("ERROR");
	std::cout << "\n\n";

	return (0);
}
