/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:08:37 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/07 16:43:01 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_)
{
    this->name = name_;
}

Zombie::~Zombie()
{
    std::cout << name << " is delete " << std::endl;
}
void Zombie:: announce(void) {
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}