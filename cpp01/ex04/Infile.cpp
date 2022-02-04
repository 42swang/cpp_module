/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Infile.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:30:38 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 12:14:12 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Infile.hpp>

std::string Infile::get_file_name(char *str)
{
	int len;
	std::string s_str = str;
	std::string ret;

	if (s_str.find(".") != std::string::npos)
		ret = s_str.substr(0, s_str.find("."));
	return (ret);
}

Infile::Infile(char **argv)
{
	infile_name = get_file_name(argv[1]);
}

Infile::~Infile()
{
}
