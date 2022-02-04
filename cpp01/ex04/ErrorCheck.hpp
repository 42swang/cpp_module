/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorCheck.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:28:15 by swang             #+#    #+#             */
/*   Updated: 2022/02/04 12:09:19 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORCHECK_HPP
# define ERRORCHECK_HPP

# include "Infile.hpp"

class ErrorCheck
{
private:
	int	count;
	std::string s1;
	std::string s2;
	std::string file;
public:
	ErrorCheck(int argc, char **argv);
	int	check_s1(std::string s1);
	int	check_s2(std::string s2);
	int	check_file(std::string file);
};

#endif
