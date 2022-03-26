/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:17:26 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 13:56:46 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() 
{
    type = "Cat";
    std::cout << "[Cat] Default constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    std::cout << "[Cat] Copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &newValue)
{
    this->type = newValue.type;
    std::cout << "[Cat] Assignement operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "MURRR" << std::endl;
}