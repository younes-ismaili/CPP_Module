/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:02:42 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/11 13:55:54 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl:: debug( void ) {
    std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl:: info( void ) {
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}
void Harl:: warning( void ) {
    std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}
void Harl:: error( void ) {
   std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl:: complain( std::string level ) {
    
    int i;
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    
    void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    Harl opjt;
    i = 0;
	while (i < 4) {
        if (level == levels[i]){
            (opjt.*func[i])();
            break;
        }
        i++;
    }
    if (i == 4)
        std::cout << level << " level not found" << std::endl;
}