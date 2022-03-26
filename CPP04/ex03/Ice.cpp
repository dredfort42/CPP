/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:32:13 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:51:31 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "[Ice] default constructor called, ice was created" << std::endl;
}

Ice::Ice(const Ice &src): AMateria(src)
{
	std::cout << "[Ice] copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &newValue)
{
	AMateria::operator=(newValue);
	std::cout << "[Ice] assignation operator called" << std::endl;
	return *this;
}

Ice::~Ice()
{
	std::cout << "[Ice] destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
