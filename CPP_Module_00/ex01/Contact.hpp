/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:57:29 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/20 17:16:04 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <sstream>

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	DarkestSecret;
	std::string	PhoneNumber;
	int			Index;
public:
	Contact();
	~Contact();
	int		addContact(int	nbr);
	void	printRow(void);
	void	printColumn(std::string str);
	void	printContact(void);
};

#endif