/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:14:27 by swang             #+#    #+#             */
/*   Updated: 2022/01/27 00:25:18 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
private :
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string phone_number;
	std::string darkest_secret;
public :
	void	init_contact();
	void	set_index(int i);
	int		get_index();
	void	set_contact();
	void	print_table();
	void	print_search();
	void	print_contact(const char *, int length);
};

#endif