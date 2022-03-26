/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:41:04 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 13:47:20 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal() 
{
    std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    *this = src;
    std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[Animal] Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &newValue)
{
    this->type = newValue.type;
    std::cout << "[Animal] Assignement operator called" << std::endl;
    return *this;
}
std::string Animal::getType() const
{
    return type;
}

void    Animal::makeSound() const
{
    std::cout << std::endl;
}