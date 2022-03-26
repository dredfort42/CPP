/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:21:06 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/08 16:03:19 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() const
{
    return (this->_type);
}

void Weapon::setType(const std::string &type)
{
	if (type != "")
    	this->_type = type;
}