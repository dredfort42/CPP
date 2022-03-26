/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:41:11 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/08 10:48:09 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {};
Zombie::Zombie(std::string name) : _name(name) {};
Zombie::~Zombie()
{
    std::cout << "Zombie killed" << std::endl;
};

void    Zombie::setName(std::string name)
{
    this->_name = name;
};

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};