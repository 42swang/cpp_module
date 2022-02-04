/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorCheck.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:01:59 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 12:14:15 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ErrorCheck.hpp"

ErrorCheck::ErrorCheck(int argc, char **argv)
{
	file = Infile::get_file_name(argv[1]);
	s1 = argv[2];
	s2 = argv[3];
}
