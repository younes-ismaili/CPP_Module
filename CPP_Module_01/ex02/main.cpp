/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:27:53 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/10 21:55:16 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(void) {
   std:: string  str = "HI THIS IS BRAIN";
   std:: string  *stringPTR = &str;
   std:: string  &stringREF = str;
   
   std:: cout << "The memory address of the string variable: " << &str << std::endl;
   std:: cout <<"The memory address held by stringPTR: " << stringPTR << std::endl;
   std:: cout <<"The memory address held by stringREF: " << &stringREF << std::endl;
   std:: cout <<"The value of the string variable: " << str << std::endl;
   std:: cout <<"The value pointed to by stringPTR: " << *stringPTR << std::endl;
   std:: cout <<"The value pointed to by stringREF: " << stringREF << std::endl;
}