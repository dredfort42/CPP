/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:25:09 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 17:40:28 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap D("DIAMOND");
    D.whoAmI();
    D.guardGate();
    D.highFivesGuys();
	D.attack("TARGET");
	D.takeDamage(10);
	D.beRepaired(5);
	D.takeDamage(500);
	D.beRepaired(1000);
    D.attack("TARGET");
    
    return 0;
}