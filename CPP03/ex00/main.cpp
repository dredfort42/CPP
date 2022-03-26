/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:25:09 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/12 20:47:42 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap A;
	ClapTrap B("BBB");

    A.setAttackDamage(4);
    B.setAttackDamage(7);

	A.attack("TARGET A");
	B.attack("TARGET B");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

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

    return 0;
}