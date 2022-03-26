/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:51:38 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 14:05:14 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixedPointValue) : _fixedPointValue(fixedPointValue << this->_numberOfFractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatingPointValue) : _fixedPointValue(roundf(floatingPointValue * pow(2, this->_numberOfFractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits() const
{
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

int     Fixed::toInt() const
{
    return (this->_fixedPointValue >> this->_numberOfFractionalBits);
}

float   Fixed::toFloat() const
{
    return (this->_fixedPointValue / pow(2, this->_numberOfFractionalBits));
}

Fixed   &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &value)
{
    o << value.toFloat();
    return o;
}