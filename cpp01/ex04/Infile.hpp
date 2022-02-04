/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infile.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:21:20 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 12:04:45 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFILE_HPP
# define INFILE_HPP

# include <iostream>
# include <fstream>

class Infile
{
private:
	std::string infile_name;
public:
	std::string get_file_name(char *str);
	Infile(char **argv);
	~Infile();
};

#endif
