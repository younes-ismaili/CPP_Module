/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:07:51 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/19 16:45:52 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class PhoneBook
{
private:
    string c_contacts;
public:
    PhoneBook(string contacts){
       c_contacts = contacts; 
    }
    ~PhoneBook();
};

PhoneBook::PhoneBook(string contacts)
{
  
}

PhoneBook::~PhoneBook()
{
}
