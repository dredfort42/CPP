/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:26:48 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 14:47:45 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("INCOGNITO"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
   std::cout << this->_name << " >> ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << this->_name << " >> ClapTrap attribute constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " >> ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &newValue)
{
    std::cout << "ClapTrap assignement operator called" << std::endl;
    this->_name = newValue._name;
    this->_hitPoints = newValue._hitPoints;
    this->_energyPoints = newValue._energyPoints;
    this->_attackDamage = newValue._attackDamage;
    return *this;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    this->_attackDamage = attackDamage;
    std::cout   << this->_name << " attack damage set at " 
        << this->_attackDamage << " points" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints && this->_energyPoints)
    {
        std::cout   << this->_name << " attacks " << target 
            << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << this->_name << " UUUPS! Hit points level: " << this->_hitPoints 
        << ". Energy points level: " << this->_energyPoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints)
    {
        this->_hitPoints -= amount;
        if (this->_hitPoints < 0)
        this->_hitPoints = 0;
        std::cout << this->_name << " took " << amount
            << " points of damage! Hit points level: " << this->_hitPoints 
            << ". Energy points level: " << this->_energyPoints << std::endl;
    }
    else
        std::cout << this->_name << " UUUPS! Hit points level: " << this->_hitPoints 
        << ". Energy points level: " << this->_energyPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints && this->_energyPoints)
    {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << this->_name << " repaired " << amount
        << " hit points! Hit points level: " << this->_hitPoints 
        << ". Energy points level: " << this->_energyPoints << std::endl;
    }
    else
        std::cout << this->_name << " UUUPS! Hit points level: " << this->_hitPoints 
        << ". Energy points level: " << this->_energyPoints << std::endl;
}