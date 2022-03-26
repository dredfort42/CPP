/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:25:09 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 14:52:17 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap R;
    ClapTrap A;
	ClapTrap B("BBB");

    A.setAttackDamage(4);
    B.setAttackDamage(7);

    R.guardGate();

    R.attack("TARGET R");
	A.attack("TARGET A");
	B.attack("TARGET B");

    R.takeDamage(7);
	A.takeDamage(5);
	B.takeDamage(8);

    R.beRepaired(10);
	A.beRepaired(1);
	B.beRepaired(6);

    R.takeDamage(50);
    A.takeDamage(5);
	B.takeDamage(11);

    A.beRepaired(10);
	B.beRepaired(15);

    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);
    A.beRepaired(10);

    A.takeDamage(5);
    A.attack("TARGET A");
    A.attack("TARGET A");
    
    R.attack("TARGET R");
    R.attack("TARGET R");
    R.attack("TARGET R");
    R.attack("TARGET R");

    return 0;
}