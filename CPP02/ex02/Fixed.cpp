/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:51:38 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 15:33:36 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {}
Fixed::Fixed(const int fixedPointValue) : _fixedPointValue(fixedPointValue << this->_numberOfFractionalBits) {}
Fixed::Fixed(const float floatingPointValue) : _fixedPointValue(roundf(floatingPointValue * pow(2, this->_numberOfFractionalBits))) {}
Fixed::Fixed(Fixed const &src) {*this = src;}
Fixed::~Fixed() {}

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
    return (this->getRawBits() >> this->_numberOfFractionalBits);
}

float   Fixed::toFloat() const
{
    return (this->getRawBits() / pow(2, this->_numberOfFractionalBits));
}

Fixed   &Fixed::operator=(Fixed const &rhs)
{
    if (this != &rhs)
        this->setRawBits(rhs.getRawBits());
    return *this;
}

Fixed   Fixed::operator+(const Fixed &rhs)
{
    return this->toFloat() + rhs.toFloat();
}

Fixed   Fixed::operator-(const Fixed &rhs)
{
    return this->toFloat() - rhs.toFloat();
}

Fixed   Fixed::operator*(const Fixed &rhs)
{
    return this->toFloat() * rhs.toFloat();
}

Fixed   Fixed::operator/(const Fixed &rhs)
{
    return this->toFloat() / rhs.toFloat();
}

Fixed   &Fixed::operator++()
{
    this->_fixedPointValue++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp = *this;
    ++*this;
    return tmp;
}

Fixed   &Fixed::operator--()
{
    this->_fixedPointValue--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp = *this;
    --*this;
    return tmp;
}

bool    Fixed::operator>(const Fixed &rhs)
{
    return this->getRawBits() > rhs.getRawBits();
}

bool    Fixed::operator<(const Fixed &rhs)
{
    return this->getRawBits() < rhs.getRawBits();
}

bool    Fixed::operator>=(const Fixed &rhs)
{
    return this->getRawBits() >= rhs.getRawBits();
}

bool    Fixed::operator<=(const Fixed &rhs)
{
    return this->getRawBits() <= rhs.getRawBits();
}

bool    Fixed::operator==(const Fixed &rhs)
{
    return this->getRawBits() == rhs.getRawBits();
}

bool    Fixed::operator!=(const Fixed &rhs)
{
    return this->getRawBits() != rhs.getRawBits();
}

Fixed &Fixed::min( Fixed &a, Fixed &b )
{
    if (a.getRawBits() <= b.getRawBits())
        return a;
    return b;
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b )
{
    if (a.getRawBits() <= b.getRawBits())
        return a;
    return b;
}

Fixed &Fixed::max( Fixed &a, Fixed &b )
{
    if (a.getRawBits() >= b.getRawBits())
        return a;
    return b;
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b )
{
    if (a.getRawBits() >= b.getRawBits())
        return a;
    return b;
}

std::ostream &operator<<(std::ostream &o, Fixed const &value)
{
    o << value.toFloat();
    return o;
}