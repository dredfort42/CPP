/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:04:42 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 13:32:41 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() 
{
    type = "Dog";
    std::cout << "[Dog] Default constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    std::cout << "[Dog] Copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &newValue)
{
    this->type = newValue.type;
    std::cout << "[Dog] Assignement operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "GAFFF" << std::endl;
}