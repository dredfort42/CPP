/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:56:01 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:52:12 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "[Cure] default constructor called, cure was created" << std::endl;
}

Cure::Cure(const Cure &src): AMateria(src)
{
	std::cout << "[Cure] copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &newValue)
{
	AMateria::operator=(newValue);
	std::cout << "[Cure] assignation operator called" << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << "[Cure] destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
