/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:41:19 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/16 21:28:28 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap :public ClapTrap
{
public:
    ScavTrap(std::string _name);
    ScavTrap(ScavTrap const &copy);
    ScavTrap &operator=(ScavTrap const &copy);
    ~ScavTrap();
    // ScavTrap operator=(ScavTrap assign);
     void attack(std::string target);
     void guardGate();
};

#endif