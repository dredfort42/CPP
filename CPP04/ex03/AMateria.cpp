/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:16:05 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:23:35 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "[AMateria] default constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type): type(type)
{
	std::cout << "[AMateria] attributed constructor called" << std::endl;
}

AMateria::AMateria(const AMateria  &src)
{
	std::cout << "[AMateria] copy constructor called\n";
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &newValue)
{
	std::cout << "[Character] assignement operator called" << std::endl;
	type = newValue.getType();
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] " << this->type << " destructor called" << std::endl;
}

const std::string &AMateria::getType() const
{
	return type;
}
