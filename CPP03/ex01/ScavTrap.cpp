/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:09:26 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 15:08:56 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << _name << " >> ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " >> ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &newValue)
{
    std::cout << "ScavTrap assignement operator called" << std::endl;
    _name = newValue._name;
    _hitPoints = newValue._hitPoints;
    _energyPoints = newValue._energyPoints;
    _attackDamage = newValue._attackDamage;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}