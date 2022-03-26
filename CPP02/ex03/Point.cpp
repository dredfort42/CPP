/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:43:49 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 20:35:44 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)  {}
Point::Point(const float x, const float y) : _x(x), _y(y) {}
Point::Point(const Point &newValue) {*this = newValue;}
Point::~Point() {}

Point &Point::operator=(const Point &newValue)
{
    if (this != &newValue)
    {
        this->_x = newValue._x;
	    this->_y = newValue.getY();
    }
	return *this;
}

bool    Point::operator==(const Point &rhs) const
{
    return (this->getX().getRawBits() == rhs.getX().getRawBits() 
            && this->getY().getRawBits() == rhs.getY().getRawBits());
}

const Fixed Point::getX() const
{
    return this->_x;
}

const Fixed Point::getY() const
{
    return this->_y;
}