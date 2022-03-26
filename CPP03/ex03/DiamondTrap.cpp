/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:33:07 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 17:35:48 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
    ClapTrap::_name = name + "_clap_name";
    ClapTrap::_hitPoints = FragTrap::_hitPoints;
    ClapTrap::_energyPoints = ScavTrap::_energyPoints;
    ClapTrap::_attackDamage = FragTrap::_attackDamage;
    std::cout << _name << " >> DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << _name << " >> DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &newValue)
{
    std::cout << "DiamondTrap assignement operator called" << std::endl;
    _name = newValue._name;
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name << " ClapTrap name: " << ClapTrap::_name << std::endl;
}