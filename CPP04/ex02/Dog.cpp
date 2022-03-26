/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:04:42 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 18:35:02 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() 
{
    std::cout << "[Dog] Default constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &src)
{
    std::cout << "[Dog] Copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &newValue)
{
    std::cout << "[Dog] Assignement operator called" << std::endl;
    type = newValue.getType();
    *brain = *newValue.getBrain();
    return *this;
}

AAnimal &Dog::operator=(const AAnimal &newValue)
{
    std::cout << "[AAnimal] Assignement operator called" << std::endl;
    this->type = newValue.getType();
    *brain = *newValue.getBrain();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "GAFFF" << std::endl;
}

Brain   *Dog::getBrain() const
{
    return this->brain;
}