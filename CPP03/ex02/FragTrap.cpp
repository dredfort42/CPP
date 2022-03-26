/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:11:52 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 15:16:00 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << _name << " >> FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << _name << " >> FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &newValue)
{
    std::cout << "FragTrap assignement operator called" << std::endl;
    _name = newValue._name;
    _hitPoints = newValue._hitPoints;
    _energyPoints = newValue._energyPoints;
    _attackDamage = newValue._attackDamage;
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap request: High fives" << std::endl;
}