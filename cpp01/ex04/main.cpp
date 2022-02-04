/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:17:46 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 16:54:42 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
	std::string s1;
	std::string s2;
	std::string infile;
	std::string outfile;
	std::string content;
	std::ofstream ofs;
	std::ifstream ifs;
	std::stringstream ss;
	int	i;

	if (argc != 4)
		return (0);
	infile = argv[1];
	outfile = infile;
	s1 = argv[2];
	s2 = argv[3];
	if (infile.find(".") != std::string::npos)
		outfile = infile.substr(0, infile.find("."));
	outfile.append(".replace");

	/* error */
	if (s1.length() == 0)
		return (0);
	else if (infile.length() == 0)
		return (0);
	ifs.open(infile, std::ios::in);
	if (ifs.fail())
	{
		ifs.clear();
		std::cerr << "Error : infile open fail\n";
		return (0);
	}
	ss << ifs.rdbuf();
	content = ss.str();
	ifs.close();
	i = 0;
	while (content.find(s1, i) != std::string::npos)
	{
		i = content.find(s1);
		content.erase(i, s1.length());
		content.insert(i, s2);
		i += s2.length();
	}
	ofs.open(outfile, std::ios::out);
	if (ofs.fail())
	{
		ofs.clear();
		std::cerr << "Error : failed to open outfile\n";
		return (0);
	}
	ofs << content;
	ofs.close();
	return (0);
}

