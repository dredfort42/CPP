/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:41:04 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 17:49:57 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
    std::cout << "[AAnimal] Destructor called" << std::endl; 
}

std::string AAnimal::getType() const
{
    return type;
}
