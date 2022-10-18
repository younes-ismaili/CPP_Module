/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:03:54 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/18 15:15:29 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap objt1("objt1");
	objt1.hitPoint = 0;
	ScavTrap objt2("name");
	objt2 = objt1;
	std::cout << objt2.getName() << objt2.hitPoint << "\n"; 
	// objt1.attack(objt1.getName());
	// objt1.setEnergyPoints(1);
	// objt1.beRepaired(10);
	// objt1.attack(objt1.getName());
	// std::cout << std::endl;
	// objt1.guardGate();
	// std::cout << std::endl;
	return (0);
}