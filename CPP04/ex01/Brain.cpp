/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:33:52 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 19:22:15 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
    std::cout << "[Brain] Copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "[Brain] Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &newValue)
{
    int i = 0;

    while (i < 100)
    {
        this->ideas[i] = newValue.ideas[i];
        i++;
    }
    std::cout << "[Brain] Assignement operator called" << std::endl;
    return *this;
}